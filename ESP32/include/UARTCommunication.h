#ifndef UARTCOMMUNICATION_H
#define UARTCOMMUNICATION_H

#include "Sensor.h"

class UARTCommunication {
public:
  UARTCommunication();
  void init();
  void sendData(float data);

private:
  // Add UART-specific attributes
};

#endif // UARTCOMMUNICATION_H
