### README.md for ESP32 Temperature and Humidity Web Server

#### Project Overview

This project sets up an ESP32 DOIT DEVKIT-V1 to act as a web server displaying real-time temperature and humidity data. The data is received over UART from an STM32 microcontroller, which reads from a DHT22 sensor. The ESP32 hosts a webpage that updates the sensor data dynamically without page refreshes.

#### Hardware Requirements

- ESP32 DOIT DEVKIT-V1 Development Board
- STM32 Nucleo-H743Zi development board
- DHT22 Temperature and Humidity Sensor (connected to STM32)
- Appropriate wiring for UART communication between STM32 and ESP32

#### Software Requirements

- Visual Studio Code
- PlatformIO IDE extension for Visual Studio Code
- Arduino framework for ESP32 within PlatformIO

#### Project Structure

- `main.cpp`: Main program setup and loop, initializes UART and API components.
- `API.h` & `API.cpp`: Manages the web server, defines routes, and handles client requests.
- `UARTReceiver.h` & `UARTReceiver.cpp`: Handles receiving data over UART and parsing it into temperature and humidity values.

#### Setup and Configuration

1. **Hardware Setup:**
   - Connect the DHT22 sensor to your STM32 board:
     - **DHT_PIN**: Connect STM32 digital pin D2 to DHT22 DATA/OUT pin.
     - **GND/-**: Connect DHT22 GND/- pin to STM32 GND pin.
     - **VCC/+**: Connect DHT22 VCC/+ pin to STM32 3V3 pin.
   - Connect the STM32 UART5 pins to ESP32 device:
     - **TX_PIN**: PC12 (connect to ESP32 RX2).
     - **RX_PIN**: PD2 (connect to ESP32 TX2).
     - **GND**: Ensure both devices share a common ground. (Connect STM32 GND to ESP32 GND)

2. **Software Setup:**
   - Open Visual Studio Code.
   - Install PlatformIO IDE extension.
   - Clone this repository or download the source files.
   - Open the project folder in PlatformIO.

#### Compilation and Upload

- Navigate to the project directory in PlatformIO.
- Compile the project using `PlatformIO: Build`.
- Upload the firmware to the ESP32 using `PlatformIO: Upload`.

#### Operating the Web Server

- After uploading, connect to the ESP32 WiFi network `ESP32_Access_Point` using the password `password123`.
- Open a web browser and go to `http://192.168.4.1/` to view the live temperature and humidity data.

#### Webpage Functionality

- The main webpage displays real-time updates of temperature and humidity.
- JavaScript fetches the latest data every second from the ESP32 and updates the webpage dynamically.