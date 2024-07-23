#ifndef UARTRECEIVER_H
#define UARTRECEIVER_H

#include <Arduino.h>

class UARTReceiver {
public:
  UARTReceiver(uint32_t baudRate);
  void init();
  void receiveData();
  float getTemperature() const;
  float getHumidity() const;

private:
  uint32_t _baudRate;
  float temperature;
  float humidity;
};

#endif // UARTRECEIVER_H
