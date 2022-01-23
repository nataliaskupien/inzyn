#ifndef BUZZER_H
#define BUZZER_H

#define buzzer_pin 9

#ifdef __cplusplus
extern "C" {
#endif

void buzzer_init();
int buzzer_on();
int buzzer_off();
void set_buzzer(int pin, int state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
