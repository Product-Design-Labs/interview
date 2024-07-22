#include "API.h"
#include "UARTReceiver.h"
#include <Arduino.h>


UARTReceiver uartReceiver;
API api;

void setup() {
  uartReceiver.init();
  api.init();
}

void loop() {
  float data = uartReceiver.receiveData();
  // Process and store the data
  delay(1000); // Adjust as needed
}
