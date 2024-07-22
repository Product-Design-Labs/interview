#include "UARTCommunication.h"
#include <Arduino.h>

UARTCommunication::UARTCommunication() {
  // Constructor implementation
}

void UARTCommunication::init() {
  // Initialize UART communication
  Serial.begin(115200);
}

void UARTCommunication::sendData(float data) {
  // Send data over UART
  Serial.println(data);
}
