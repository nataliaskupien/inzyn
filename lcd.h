#ifndef LCD_H
#define LCD_H 

#ifdef __cplusplus
extern "C" {
#endif

void lcd_init();
void lcd_print_humidity(uint8_t humidity);
void lcd_print_water_level(const char *liquid_level);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
