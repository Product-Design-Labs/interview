#include "Sensor.h"

Sensor::Sensor(uint8_t pin, uint8_t type) : _dht(pin, type) {}  // initilizes the dht instance with pin and type.

void Sensor::init() {
  _dht.begin();
}

// Returns Temperature value read from the DHT22 Sensor.
float Sensor::readTemperature() {
  return _dht.readTemperature();
}

// Returns Humidity value read from the DHT22 Sensor.
float Sensor::readHumidity() {
  return _dht.readHumidity();
}

