#include "TreviStem_LedRGB.h"
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(5, OUTPUT);   
  ledcSetup(pwmChannel, freq, resolution);
  ledcAttachPin(GPIO, pwmChannel);
  Serial.begin(9600);  
} 
