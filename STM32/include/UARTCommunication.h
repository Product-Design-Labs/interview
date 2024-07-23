#ifndef UARTCOMMUNICATION_H
#define UARTCOMMUNICATION_H

#include <Arduino.h>

class UARTCommunication {
public:
  UARTCommunication(HardwareSerial serial, uint32_t baudRate);
  void init();
  void sendData(float temperature, float humidity);

private:
  HardwareSerial _serial;
  uint32_t _baudRate;
};

#endif // UARTCOMMUNICATION_H

