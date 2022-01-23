#ifndef MOISTURE_SENSOR_H
#define MOISTURE_SENSOR_H
#define sensor_pin A0


#ifdef __cplusplus
extern "C" {
#endif
  
int humidity_sensor_measure();

long int map_value(long x, long in_min, long in_max, long out_min, long out_max);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
