#include "Arduino.h"
#include "moisture_sensor.h"
#include "pump.h"
#include "liquid_sensor.h"

void pump_init()
{
  pinMode(relay,OUTPUT);
}

void pump_on()
{
  digitalWrite(relay,LOW);
}

void pump_off()
{
  digitalWrite(relay,HIGH);
}

void pump_handle(uint8_t humidity_value)
{
  
  liquid_t water_level = liquid_level();

  unsigned long current_time = 0;
  static unsigned long remember_time = 0;
  unsigned long difference = 0;
  
  const unsigned long time_duration = 3000;
  const uint8_t optimal_humidity = 55;
  
  pump_off();
  
  if (humidity_value < optimal_humidity && water_level == Medium || water_level == High || water_level == Low)
  {
    pump_on();
    current_time = millis();
    difference = current_time - remember_time;
    
    if (difference >= time_duration)
    {
      pump_off();
      remember_time = current_time;
      //pump_handle(humidity_value);
    }
  }
}
