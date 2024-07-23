### README.md for STM32 Temperature and Humidity Monitoring

#### Project Overview

This project demonstrates how to read temperature and humidity data from a DHT22 sensor using an STM32 microcontroller and transmit the data to ESP32 DOIT DEVKIT-V1 device over UART. The project is set up and compiled using Visual Studio Code with the PlatformIO extension and uses the Arduino framework.

#### Hardware Requirements

- STM32 Nucleo-H743Zi development board
- DHT22 temperature and humidity sensor
- Connecting wires
- ESP32 DOIT DEVKIT V1 to receive the data over UART

#### Software Requirements

- Visual Studio Code
- PlatformIO IDE extension for Visual Studio Code
- Arduino framework installed within PlatformIO

#### External Libraries

- **DHT sensor library & Adafruit Unified Sensor**: Used for interfacing with the DHT22 sensor. Handles the digital communication and parses the temperature and humidity data from the sensor.
  - Installation: These library can be added through PlatformIO's Library Manager by searching for "DHT sensor library" or by adding `adafruit/DHT sensor library@^1.4.3` and `adafruit/Adafruit Unified Sensor@^1.1.4` to the `lib_deps` in the `platformio.ini` file.

#### Project Structure

- `main.cpp`: Main program entry. Initializes the sensor and UART communication, reads sensor data, and transmits it over UART.
- `Sensor.h` & `Sensor.cpp`: Defines the `Sensor` class for interfacing with the DHT22 sensor.
- `UARTCommunication.h` & `UARTCommunication.cpp`: Defines the `UARTCommunication` class for transmitting data to ESP32 over UART.

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

- Open the PlatformIO project.
- Build the project using PlatformIO: `PlatformIO: Build`.
- Upload the firmware to your STM32 board using PlatformIO: `PlatformIO: Upload`.

#### Debugging and Serial Output

- Open the serial monitor from PlatformIO to view debug messages and sensor data:
  - Baud rate for the serial monitor is set at 115200 bps.

#### Usage

- After uploading, the STM32 reads temperature and humidity data from the DHT22 sensor every 2 seconds.
- If valid data is read, it is formatted and sent over UART in the format: `Temperature:XX.XX,Humidity:YY.YY`.
- Errors in reading from the sensor are output to the serial monitor.



















