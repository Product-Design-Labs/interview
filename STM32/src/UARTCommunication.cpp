#include "UARTCommunication.h"

UARTCommunication::UARTCommunication(HardwareSerial serial, uint32_t baudRate)
: _serial(serial), _baudRate(baudRate) {}

void UARTCommunication::init() {
  _serial.begin(_baudRate);
}

// Sends the temperature and humidity value to ESP32
void UARTCommunication::sendData(float temperature, float humidity){
  _serial.print("Temperature:");
  _serial.print(temperature, 2);
  _serial.print(",Humidity:");
  _serial.println(humidity, 2);
}
