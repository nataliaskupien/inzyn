#include "Arduino.h"
#include "newliquidcrystal.h"
#include "LiquidCrystal.h"

LiquidCrystal lcd(PIN_LCD1,PIN_LCD2,PIN_LCD3,PIN_LCD4,PIN_LCD5,PIN_LCD6);

void begin_lcd(int rows, int columns)
{
  lcd.begin(rows,columns);
}
void setCursor_lcd(int row, int column)
{
  lcd.setCursor(row,column);
}
void print_text(char text[16])
{
  lcd.print(text);
}
void print_variable(int variable)
{
  lcd.print(variable);
}
void clear_text()
{
  lcd.clear();
}
void clear_text2()
{
  lcd.setCursor(6,1);
  lcd.clear();
}
