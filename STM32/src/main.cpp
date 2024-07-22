#include "Sensor.h"
#include "UARTCommunication.h"
#include <Arduino.h>


Sensor sensor;
UARTCommunication uartComm;

void setup() {
  sensor.init();
  uartComm.init();
}

void loop() {
  float data = sensor.readData();
  uartComm.sendData(data);
  delay(1000); // Adjust as needed
}
