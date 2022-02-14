#include "Arduino.h"
#include "moisture_sensor.h"
#include "pump.h"
#include "liquid_sensor.h"

void pump1_init()
{
  pinMode(relay,OUTPUT);
}
//void pump2_init()
//{
//  pinMode(relay2,OUTPUT);
//}

void pump1_on()
{
  digitalWrite(relay,LOW);
}

void pump1_off()
{
  digitalWrite(relay,HIGH);
}

//void pump2_on()
//{
//  digitalWrite(relay2,LOW);
//}
//
//void pump2_off()
//{
//  digitalWrite(relay2,HIGH);
//}

void pump1_handle(uint8_t humidity_value)
{
  
  liquid_t water_level = liquid_level();

  unsigned long current_time = 0;
  static unsigned long remember_time = 0;
  unsigned long difference = 0;
  
  const unsigned long time_duration = 3000;
  const uint8_t optimal_humidity = 55;
  
  pump1_off();
  
  if (humidity_value < optimal_humidity && water_level != Empty) //&& water_level == Medium || water_level == High || water_level == Low)
  {
    pump1_on();
    current_time = millis();
    difference = current_time - remember_time;
    
    if (difference >= time_duration)
    {
      pump1_off();
      remember_time = current_time;
      //pump_handle(humidity_value);
    }
  }
}

//void pump2_handle(uint8_t humidity_value)
//{
//  
//  liquid_t water_level = liquid_level();
//
//  unsigned long current_time = 0;
//  static unsigned long remember_time = 0;
//  unsigned long difference = 0;
//  
//  const unsigned long time_duration = 3000;
//  const uint8_t optimal_humidity = 55;
//  
//  pump2_off();
//  
//  if (humidity_value < optimal_humidity && water_level == Medium || water_level == High || water_level == Low)
//  {
//    pump2_on();
//    current_time = millis();
//    difference = current_time - remember_time;
//    
//    if (difference >= time_duration)
//    {
//      pump2_off();
//      remember_time = current_time;
//      //pump_handle(humidity_value);
//    }
//  }
//}
