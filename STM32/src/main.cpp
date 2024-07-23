#include "Sensor.h"
#include "UARTCommunication.h"
#include <Arduino.h>

#define DHT_PIN D2
#define DHT_DEVICE DHT22

// RX and TX Pins for UART5 
constexpr uint8_t RX_PIN = PD2; 
constexpr uint8_t TX_PIN = PC12;

HardwareSerial Serial1(RX_PIN, TX_PIN);  // RX, TX
uint32_t baudRate = 115200;

Sensor sensor(DHT_PIN, DHT_DEVICE);  // Sensor Object Initialization
UARTCommunication uartComm(Serial1, baudRate); // UARTCommunication Object Initialization

void setup() {
  Serial.begin(115200);  // Serial monitor for debugging purpose.
  sensor.init();
  uartComm.init();
}

void loop() {
  float temp = sensor.readTemperature();
  float humidity = sensor.readHumidity();

  if (!isnan(temp) && !isnan(humidity)) {
    uartComm.sendData(temp, humidity);
  } else {
    Serial.println("Error: Invalid Sensor Value.");
  }
  
  delay(2000);
}
