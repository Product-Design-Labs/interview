# STM32 Project

## Objective
Read data from a sensor and send it to the ESP32 over UART.

## Files Provided
- `Sensor.h` and `Sensor.cpp`: Define and implement the `Sensor` class for initializing and reading data from the sensor.
- `UARTCommunication.h` and `UARTCommunication.cpp`: Define and implement the `UARTCommunication` class for initializing UART communication and sending data.
- `main.cpp`: Use instances of the `Sensor` and `UARTCommunication` classes to read sensor data and send it over UART.

## Instructions
1. Complete the implementation of the `Sensor` class to initialize the sensor and read data from it.
2. Complete the implementation of the `UARTCommunication` class to initialize UART and send data to the ESP32.
3. Ensure the `main.cpp` file correctly integrates these classes and periodically sends sensor data over UART.
