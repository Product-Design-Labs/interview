# ESP32 Project

## Objective
Create an API to expose the received sensor data.

## Files Provided
- `API.h` and `API.cpp`: Define and implement the `API` class to initialize and serve the API.
- `UARTReceiver.h` and `UARTReceiver.cpp`: Define and implement the `UARTReceiver` class for initializing UART communication and receiving data.
- `main.cpp`: Use instances of the `UARTReceiver` and `API` classes to receive data and expose it via an API.

## Instructions
1. Complete the implementation of the `UARTReceiver` class to initialize UART and receive data from the STM32.
2. Complete the implementation of the `API` class to create an endpoint that exposes the received sensor data.
3. Ensure the `main.cpp` file correctly integrates these classes and periodically receives sensor data and makes it available through the API.
