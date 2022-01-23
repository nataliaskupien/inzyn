#include "Arduino.h"
#include "buzzer.h"


void buzzer_init()
{
  pinMode(buzzer_pin,OUTPUT);
  buzzer_off();
}

int buzzer_on()
{
  digitalWrite(buzzer_pin,HIGH);
  return HIGH;
}

int buzzer_off()
{
  digitalWrite(buzzer_pin,LOW);
  return LOW;
}

void set_buzzer(int pin, int state)
{
  digitalWrite(pin,state);
}
