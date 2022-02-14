#ifndef PUMP2_H
#define PUMP2_H

#define relay2 10

#ifdef __cplusplus
extern "C" {
#endif

void pump2_init(); 
void pump2_on();
void pump2_off(); 
void pump2_handle(uint8_t humidity_value);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
