#include "Arduino.h"
#include "liquid_sensor.h"


liquid_t liquid_level()
{
  //(void)analogRead(liquid_pin);
  uint16_t liquid_measure = analogRead(liquid_pin);

  const uint16_t measure_empty = 450;
  const uint16_t measure_low = 530;
  const uint16_t measure_high = 550;
  
  if (liquid_measure <= measure_empty)
  {  
    return Empty;
  } 
  else if (liquid_measure > measure_empty && liquid_measure <= measure_low)
  { 
    return Low;
  } 
  else if (liquid_measure > measure_low && liquid_measure <= measure_high)
  { 
    return Medium; 
  } 
  else
  { 
    return High;
  }
}
