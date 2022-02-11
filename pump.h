#ifndef PUMP_H
#define PUMP_H
#define relay 8
#define relay2 10

#ifdef __cplusplus
extern "C" {
#endif

void pump1_init();
void pump2_init();
void pump1_on();
void pump1_off(); 
void pump2_on();
void pump2_off(); 
void pump1_handle(uint8_t humidity_value);
void pump2_handle(uint8_t humidity_value);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
