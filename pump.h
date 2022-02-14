#ifndef PUMP_H
#define PUMP_H
#define relay 8

#ifdef __cplusplus
extern "C" {
#endif

void pump1_init();
void pump1_on();
void pump1_off();  
void pump1_handle(uint8_t humidity2_value);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
