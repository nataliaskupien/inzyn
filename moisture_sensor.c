#include "Arduino.h"
#include  "moisture_sensor.h"

int humidity1_sensor_measure()
{
  const uint16_t max_sensor_value = 1023;
  const uint16_t min_sensor_value = 350;
  const uint16_t min_humidity_value = 0;
  const uint16_t max_humidity_value = 100;
  
  //(void)analogRead(sensor_pin);
  uint16_t sensor_analog = analogRead(sensor1_pin);
  uint8_t moisture_percentage = map_value(sensor_analog , max_sensor_value ,
                                min_sensor_value , min_humidity_value , max_humidity_value);

  return moisture_percentage;
}

int humidity2_sensor_measure()
{
  const uint16_t max_sensor_value = 1023;
  const uint16_t min_sensor_value = 230;
  const uint16_t min_humidity_value = 0;
  const uint16_t max_humidity_value = 100;
  
  //(void)analogRead(sensor_pin);
  uint16_t sensor_analog = analogRead(sensor2_pin);
  uint8_t moisture_percentage = map_value(sensor_analog , max_sensor_value ,
                                min_sensor_value , min_humidity_value , max_humidity_value);

  return moisture_percentage;
}

long int map_value(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
