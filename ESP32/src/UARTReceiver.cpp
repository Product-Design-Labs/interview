#include "UARTReceiver.h"
#include <Arduino.h>

UARTReceiver::UARTReceiver() {
  // Constructor implementation
}

void UARTReceiver::init() {
  // Initialize UART communication
  Serial.begin(115200);
}

float UARTReceiver::receiveData() {
  // Receive data over UART
  if (Serial.available()) {
    return Serial.parseFloat();
  }
  return 0.0; // Placeholder
}
