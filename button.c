#include "Arduino.h"
#include "button.h"


void button_init()
{
  pinMode(button_pin,INPUT_PULLUP);
}

int button_state()
{
  return digitalRead(button_pin);
}

int button_off()
{
  digitalRead(button_pin);
  return LOW;
}

void set_state(int pin, int state)
{
  digitalWrite(pin,state);
}
