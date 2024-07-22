#ifndef UARTRECEIVER_H
#define UARTRECEIVER_H

class UARTReceiver {
public:
  UARTReceiver();
  void init();
  float receiveData();

private:
  // Add UART-specific attributes
};

#endif // UARTRECEIVER_H
