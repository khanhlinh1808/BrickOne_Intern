#include "TreviStem_DC.h"

void  TreviStem_DC::RunDC(uint8_t direct, uint8_t Pin, uint8_t power)
{
  pinMode(4, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  if (direct == 0)
  {
    if (Pin == 2)
    {
        digitalWrite(17, HIGH);
        digitalWrite(15, LOW);
        analogWrite(18, 255 * power *0.01) ;
    }
    if (Pin == 1)
    {
        digitalWrite(16, HIGH);
        digitalWrite(4, LOW);
        analogWrite(5, 255 * power*0.01) ;
    }
    if (Pin == 3)
    {
        digitalWrite(17, HIGH);
        digitalWrite(15, LOW);
        analogWrite(18, 255 * power *0.01) ;
        digitalWrite(16, HIGH);
        digitalWrite(4, LOW);
        analogWrite(5, 255 * power *0.01) ;
    }
  }
else
  {
    if (Pin == 2)
    {
        digitalWrite(17, LOW);
        digitalWrite(15, HIGH);
        analogWrite(18, 255 * power *0.01) ;
    }
    if (Pin == 1)
    {
        digitalWrite(16, LOW);
        digitalWrite(4, HIGH);
        analogWrite(5, 255 * power *0.01) ;
    }
    if (Pin == 3)
    {
        digitalWrite(17, LOW);
        digitalWrite(15, HIGH);
        analogWrite(18, 255 * power *0.01) ;
        digitalWrite(16, LOW);
        digitalWrite(4, HIGH);
        analogWrite(5, 255 * power *0.01) ;
    }
  }
}

void TreviStem_DC::setdefaultDC(uint8_t Pin)
{
  pinMode(4, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  if (Pin == 2) 
  {
    digitalWrite(17, HIGH);
    digitalWrite(15, LOW);
    analogWrite(18, 100) ;
  }
   if (Pin == 1) 
  {
    digitalWrite(16, HIGH);
    digitalWrite(4, LOW);
    analogWrite(5, 100) ;
  }
  if (Pin == 3) 
  {
    digitalWrite(17, HIGH);
    digitalWrite(15, LOW);
    analogWrite(18, 100) ;
    digitalWrite(16, HIGH);
    digitalWrite(4, LOW);
    analogWrite(5, 100) ;
  }
}

void TreviStem_DC::stopDC(uint8_t Pin)
{
  pinMode(4, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  if (Pin == 2) 
  {
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
  }
   if (Pin == 1) 
  {
    digitalWrite(16, LOW);
    digitalWrite(4, LOW);
  }
  if (Pin == 3) 
  {
    digitalWrite(17, LOW);
    digitalWrite(15, LOW);
    digitalWrite(16, LOW);
    digitalWrite(4, LOW);
  }
}


