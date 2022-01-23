#include "moisture_sensor.h"
#include "pump.h"
#include "liquid_sensor.h"
#include "lcd.h"
#include "newliquidcrystal.h"
#include "buzzer.h"

#define DEBUG
#define liquid_pin A1

const char *water_level_text = "ERROR";

void setup() {
  Serial.begin(9600);
  lcd_init();
  buzzer_init();
  pump_init();
}

void loop() {

  uint8_t humidity_value = humidity_sensor_measure();

  liquid_t water_level = liquid_level();
  
  pump_handle(humidity_value);

  lcd_print_humidity(humidity_value);

  liquid_level_case(water_level);
  
  lcd_print_water_level(water_level_text);
  
 
  #ifdef DEBUG
  //Serial.print("Moisture Percentage = ");
  //Serial.println(humidity_sensor_measure());

  //Serial.print("Liquid level = ");
  //Serial.println(water_level_text);
  #endif
}

void water_level_sound()
{
  static int buzzer_state = buzzer_off();
  static long previous_millis = 0;
  
  const long on_time = 1000UL;
  const long off_time = 1000UL;
  
  unsigned long current_millis = millis();
  unsigned long duration = current_millis - previous_millis;
  
  if((buzzer_state == HIGH)&&(duration >= on_time))
  {
    buzzer_state = LOW;
    previous_millis = current_millis;
    set_buzzer(buzzer_pin,buzzer_state);
  }
  else if((buzzer_state == LOW)&&(duration >= off_time))
  {
    buzzer_state = HIGH;
    previous_millis = current_millis;
    set_buzzer(buzzer_pin,buzzer_state);
  }
}

void liquid_level_case(liquid_t water_level)
{
  switch(water_level)
  {
    case Empty:
    water_level_text = "Empty";
    //water_level_sound();
    break;
    
    case Low:
    water_level_text = "Low";
    break;
    
    case Medium:
    water_level_text = "Medium";
    break;
    
    case High:
    water_level_text = "High";
    break;

  }
}
