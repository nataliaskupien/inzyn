#ifndef LIQUID_SENSOR_H
#define LIQUID_SENSOR_H

#define liquid_pin A1

#ifdef __cplusplus
extern "C" {
#endif
  
typedef enum liquid {Empty, Low, Medium, High} liquid_t;

liquid_t liquid_level();

#ifdef __cplusplus
} // extern "C"
#endif

#endif
