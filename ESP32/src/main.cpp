#include "API.h"
#include "UARTReceiver.h"
#include <Arduino.h>

uint32_t baudRate = 115200;

UARTReceiver uartReceiver(baudRate);  // UARTReceiver Object Initialization
API api(uartReceiver); // API Object Initialization

void setup() {
  Serial.begin(115200); // Serial monitor for debugging purpose.
  uartReceiver.init();
  api.init();
}

void loop() {
  uartReceiver.receiveData();  // Process data received through Serial Monitor
  api.handleClient();
}
