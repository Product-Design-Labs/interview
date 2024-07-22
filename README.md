### Instructions for Completing the Technical Challenge

**Objective:**
The objective of this technical challenge is to evaluate your ability to use proper object-oriented programming (OOP) principles, structure your code effectively, and integrate firmware for an STM32 microcontroller with an ESP32 microcontroller using UART communication. Additionally, you will create an API on the ESP32 to expose the sensor data.

**Task Description:**
1. **STM32 Project**:
   - **Goal**: Write firmware to read data from a sensor and send it to the ESP32 over UART.
   - **Files Provided**:
     - `Sensor.h` and `Sensor.cpp`: Define and implement the `Sensor` class for initializing and reading data from the sensor.
     - `UARTCommunication.h` and `UARTCommunication.cpp`: Define and implement the `UARTCommunication` class for initializing UART communication and sending data.
     - `main.cpp`: Use instances of the `Sensor` and `UARTCommunication` classes to read sensor data and send it over UART.
   - **Instructions**:
     - Complete the implementation of the `Sensor` class to initialize the sensor and read data from it.
     - Complete the implementation of the `UARTCommunication` class to initialize UART and send data to the ESP32.
     - Ensure the `main.cpp` file correctly integrates these classes and periodically sends sensor data over UART.

2. **ESP32 Project**:
   - **Goal**: Create an API to expose the received sensor data.
   - **Files Provided**:
     - `API.h` and `API.cpp`: Define and implement the `API` class to initialize and serve the API.
     - `UARTReceiver.h` and `UARTReceiver.cpp`: Define and implement the `UARTReceiver` class for initializing UART communication and receiving data.
     - `main.cpp`: Use instances of the `UARTReceiver` and `API` classes to receive data and expose it via an API.
   - **Instructions**:
     - Complete the implementation of the `UARTReceiver` class to initialize UART and receive data from the STM32.
     - Complete the implementation of the `API` class to create an endpoint that exposes the received sensor data.
     - Ensure the `main.cpp` file correctly integrates these classes and periodically receives sensor data and makes it available through the API.

### Submission Guidelines

1. **Code Quality**:
   - Use proper OOP principles, including encapsulation, abstraction, and modularization.
   - Ensure your code is well-organized and follows consistent coding standards.
   - Include comments where necessary to explain your logic and code structure.

2. **Functionality**:
   - Ensure that the STM32 firmware correctly reads sensor data and sends it over UART.
   - Ensure that the ESP32 firmware correctly receives the data over UART and exposes it through a simple API.

3. **Documentation**:
   - Provide a README file with instructions on how to build and run your projects.
   - Describe any assumptions you made and any deviations from the provided structure.

### Project Structure

**STM32 Project:**
```
STM32_Project/
│
├── include/
│   ├── Sensor.h
│   ├── UARTCommunication.h
│
├── src/
│   ├── main.cpp
│   ├── Sensor.cpp
│   ├── UARTCommunication.cpp
│
├── platformio.ini
├── README.md
```

**ESP32 Project:**
```
ESP32_Project/
│
├── include/
│   ├── API.h
│   ├── UARTReceiver.h
│
├── src/
│   ├── main.cpp
│   ├── API.cpp
│   ├── UARTReceiver.cpp
│
├── platformio.ini
├── README.md
```

### Evaluation Criteria

1. **Technical Skills**:
   - Proper use of classes and OOP principles.
   - Correct implementation of UART communication.
   - Correct implementation of the API.

2. **Project Experience**:
   - Demonstrated ability to work with embedded systems and microcontrollers.
   - Experience with remote monitoring and control.
   - Experience with sensor integration.

3. **Soft Skills**:
   - Problem-solving ability demonstrated in the implementation.
   - Clear and effective documentation.
   - Ability to structure and organize code effectively.

4. **Overall Fit**:
   - Technical proficiency in embedded systems development.
   - Compatibility with our team's coding standards and practices.
   - Potential for growth and learning.

### How to Submit

1. Create a zip file containing both the STM32 and ESP32 project directories.
2. Ensure the README.md files in both projects provide clear instructions on building and running the code.
3. Submit the zip file along with any additional documentation you believe is relevant.

We look forward to reviewing your work and discussing it further in the interview. Good luck!