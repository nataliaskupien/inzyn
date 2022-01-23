#ifndef NEWLIQUIDCRYSTAL_H
#define NEWLIQUIDCRYSTAL_H

#define PIN_LCD1 2
#define PIN_LCD2 3
#define PIN_LCD3 4
#define PIN_LCD4 5
#define PIN_LCD5 6
#define PIN_LCD6 7

#ifdef __cplusplus
extern "C" {
#endif

void begin_lcd(int rows, int columns);

void setCursor_lcd(int row, int column);

void print_text(char text[16]);

void print_variable(int variable);

void clear_text();
void clear_text2();

#ifdef __cplusplus
} // extern "C"
#endif

#endif
