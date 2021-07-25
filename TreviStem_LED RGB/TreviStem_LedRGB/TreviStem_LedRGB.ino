#include "TreviStem_LedRGB.h"
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(5, OUTPUT);   
  Serial.begin(9600);  
}
