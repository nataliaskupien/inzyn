#include "Arduino.h"
#include "newliquidcrystal.h"
#include "liquid_sensor.h"
#include "lcd.h"

lcd_init()
{
  begin_lcd(16,2);
}

void lcd_print_humidity(uint8_t humidity)
{
  
  if (humidity < 10)
  {
  setCursor_lcd(0,0);
  print_text("Humidity 1:");
  setCursor_lcd(11,0);
  print_variable(humidity);
  setCursor_lcd(12,0);
  print_text(" ");
  setCursor_lcd(13,0);
  print_text("%");
  
  }

  if (humidity > 99)
  {
  setCursor_lcd(0,0);
  print_text("Humidity 1:");
  setCursor_lcd(11,0);
  print_variable(humidity);
  setCursor_lcd(13,0);
  print_text(" ");
  setCursor_lcd(15,0);
  print_text("%");
  }
      
  setCursor_lcd(0,0);
  print_text("Humidity 1:");
  setCursor_lcd(11,0);
  print_variable(humidity);
  setCursor_lcd(13,0);
  print_text("%");

}

void lcd_print_water_level(const char *liquid_level)
{
  if(liquid_level == "Empty")
  {
    setCursor_lcd(0,1);
    print_text("Water:");
    setCursor_lcd(6,1);
    print_text(liquid_level);
    setCursor_lcd(11,1);
    print_text(" ");
  } 
   if(liquid_level == "Low")
  {
    setCursor_lcd(0,1);
    print_text("Water:");
    setCursor_lcd(6,1);
    print_text(liquid_level);
    setCursor_lcd(9,1);
    print_text(" ");
    setCursor_lcd(10,1);
    print_text(" ");
    setCursor_lcd(11,1);
    print_text(" ");
  }
  
  if(liquid_level == "High")
  {
    setCursor_lcd(0,1);
    print_text("Water:");
    setCursor_lcd(6,1);
    print_text(liquid_level);
    setCursor_lcd(10,1);
    print_text(" ");
    setCursor_lcd(11,1);
    print_text(" ");
  }
  
  if(liquid_level == "Medium")
  {
    setCursor_lcd(0,1);
    print_text("Water:");
    setCursor_lcd(6,1);
    print_text(liquid_level);
  }
}

void lcd_print_hello()
{
  setCursor_lcd(0,0);
  print_text("Hello");
//  setCursor_lcd(0,1);
//  print_text("Press the button");
}

void lcd_print_humidity2()
{
  //TEST
    setCursor_lcd(0,0);
    print_text("Humidity 2:");
    setCursor_lcd(11,0);
    print_text("??");
    setCursor_lcd(13,0);
    print_text("%");
  
//  if (humidity < 10)
//  {
//  setCursor_lcd(0,0);
//  print_text("Humidity:");
//  setCursor_lcd(9,0);
//  print_variable(humidity);
//  setCursor_lcd(10,0);
//  print_text(" ");
//  setCursor_lcd(11,0);
//  print_text("%");
//  setCursor_lcd(12,0);
//  print_text(" ");
//  }
//
//  if (humidity > 99)
//  {
//  setCursor_lcd(0,0);
//  print_text("Humidity:");
//  setCursor_lcd(9,0);
//  print_variable(humidity);
//  setCursor_lcd(11,0);
//  print_text(" ");
//  setCursor_lcd(12,0);
//  print_text("%");
//  }
//      
//  setCursor_lcd(0,0);
//  print_text("Humidity:");
//  setCursor_lcd(9,0);
//  print_variable(humidity);
//  setCursor_lcd(11,0);
//  print_text("%");
//  setCursor_lcd(12,0);
//  print_text(" ");

}
