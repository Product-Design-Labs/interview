#ifndef SENSOR_H
#define SENSOR_H

#include <DHT.h>

class Sensor {
public:
  Sensor(uint8_t pin, uint8_t type);
  void init();
  float readTemperature();
  float readHumidity();

private:
  DHT _dht;
};

#endif // SENSOR_H
