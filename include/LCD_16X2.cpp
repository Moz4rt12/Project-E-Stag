/*
 * Author: Matheus Israel
 * Description: Creation of all functions for LCD display.
 * Date: 10/09/2024
 * University: Anhembi Morumbi
*/

// Libraries inclusion
#include "LCD_16X2.hpp"

// Function creation
bool LCD_Init()
{
   LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
   lcd.begin(16, 2); 

   lcd.print("PROJECT E-STAG");
   delay(1000);

   return true;
}
