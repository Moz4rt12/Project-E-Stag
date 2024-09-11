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
   lcd.begin(16, 2); 
}
