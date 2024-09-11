#ifndef LCD_16X2_HPP
#define LCD_16X2_HPP

// Libraries Inclusion
#include <arduino.h>
#include <LiquidCrystal.h>

// ESP3 pin definitions for LCD
const int rs = 12, en = 14, d4 = 26, d5 = 25, d6 = 33, d7 = 32;

// Function definitions
bool LCD_Init(void);

#endif // LCD_16X2_HPP