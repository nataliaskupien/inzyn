#ifndef BUTTON_H
#define BUTTON_H

#define button_pin 11

#ifdef __cplusplus
extern "C" {
#endif

void button_init();
int button_state();
int button_off();
void set_state(int pin, int state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
