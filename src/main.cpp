#include <Arduino.h>
#include "LCD_16X2.hpp"

void setup(void)
{
  if(LCD_Init)
  {
    printf("PosDebug -> The display was started properly.");
  }
  else
  {
    printf("NegDebug -> The display has failed.");
  }
  
}

void loop()
{
  setup();
  printf("InfoDebug -> This is a test.");
}