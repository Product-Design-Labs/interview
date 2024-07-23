#include "UARTReceiver.h"

UARTReceiver::UARTReceiver(uint32_t baudRate) : _baudRate(baudRate), temperature(0.0), humidity(0.0) {}

void UARTReceiver::init() {
  Serial2.begin(_baudRate);
}

void UARTReceiver::receiveData() {
  static String buffer = "";  // Buffer to hold incoming data for multiple loop iterations

  while (Serial2.available()) {
    char c = Serial2.read();  // Read a single Character
    if (c == '\n') {  // Check for the newline character which indicates the end of a transmission
      int tempIndex = buffer.indexOf("Temperature:");
      int humIndex = buffer.indexOf(",Humidity:", tempIndex);
      if (tempIndex != -1 && humIndex != -1) {
        temperature = buffer.substring(tempIndex + 12, buffer.indexOf(',', tempIndex)).toFloat();
        humidity = buffer.substring(humIndex + 10).toFloat();
      }
      Serial.println(buffer);  // Debug print statement
      buffer = "";  // Clear the buffer after processing
    } else {
      buffer += c;  // Append received character to buffer
    }
  }
}

float UARTReceiver::getTemperature() const {
  return temperature;
}

float UARTReceiver::getHumidity() const {
  return humidity;
}

