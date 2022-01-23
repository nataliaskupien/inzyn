#ifndef PUMP_H
#define PUMP_H
#define relay 8

#ifdef __cplusplus
extern "C" {
#endif

void pump_init();
void pump_on();
void pump_off(); 
void pump_handle(uint8_t humidity_value);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
