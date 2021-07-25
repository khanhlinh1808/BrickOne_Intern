#include "TreviStem_LedRGB.h"
uint8_t RedValue, GreenValue, BlueValue;

int TreviStem_LedRGB::ConvertCharHextoNum(char hexchar)
{
  switch (hexchar)
  {
    case '0':
        return 0;
        break;
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    case '3':
        return 3;
        break;
    case '4':
        return 4;
        break;
    case '5':
        return 5;
        break;
    case '6':
        return 6;
        break;
    case '7':
        return 7;
        break;
    case '8':
        return 8;
        break;
    case '9':
        return 9;
        break;
    case 'A':
        return 10;
        break;
    case 'B':
        return 11;
        break;
    case 'C':
        return 12;
        break;
    case 'D':
        return 13;
        break;
    case 'E':
        return 14;
        break;
    case 'F':
        return 15;
        break;
     case 'a':
        return 10;
        break;
    case 'b':
        return 11;
        break;
    case 'c':
        return 12;
        break;
    case 'd':
        return 13;
        break;
    case 'e':
        return 14;
        break;
    case 'f':
        return 15;
        break;
  }
}
void TreviStem_LedRGB::ConvertHextoRGBvalue(char HexColor_temp[10])
{  
  RedValue = ConvertCharHextoNum(HexColor_temp[1])*16 + ConvertCharHextoNum(HexColor_temp[2]);
  GreenValue = ConvertCharHextoNum(HexColor_temp[3]) *16 + ConvertCharHextoNum(HexColor_temp[4]);
  BlueValue = ConvertCharHextoNum(HexColor_temp[5]) *16 + ConvertCharHextoNum(HexColor_temp[6]);
}
void TreviStem_LedRGB::LedRGB_SetColor (char HexColor[10], int x)
{
  ConvertHextoRGBvalue(HexColor);
  if (x==1) {
    analogWrite(14,RedValue);
    analogWrite(12,GreenValue);
    analogWrite(27,BlueValue);
  }
  if (x==2) {
    analogWrite(33,RedValue);
    analogWrite(25,GreenValue);
    analogWrite(32,BlueValue);
  }
  if (x==3) {
    analogWrite(22,RedValue);
    analogWrite(23,GreenValue);
    analogWrite(21,BlueValue);
  }
  if (x==4) {
    analogWrite(14,RedValue);
    analogWrite(12,GreenValue);
    analogWrite(27,BlueValue);

    analogWrite(33,RedValue);
    analogWrite(25,GreenValue);
    analogWrite(32,BlueValue);

    analogWrite(22,RedValue);
    analogWrite(23,GreenValue);
    analogWrite(21,BlueValue);
  }
  Serial.println(RedValue);
  Serial.println(GreenValue);
  Serial.println(BlueValue);
}
void TreviStem_LedRGB::LedRGB_SetOff(int x)
{
  RedValue = 0;
  GreenValue = 0;
  BlueValue = 0;
  if (x==1) {
    digitalWrite(14, LOW);
    digitalWrite(12, LOW);
    digitalWrite(27, LOW);
  }
  if (x==2) {
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(32, LOW);
  }
  if (x==3) {
    digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(21, LOW);
  }
  if (x==4) {
  	 digitalWrite(14, LOW);
    digitalWrite(12, LOW);
    digitalWrite(27, LOW);
     digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(32, LOW);
     digitalWrite(22, LOW);
    digitalWrite(23, LOW);
    digitalWrite(21, LOW);
  }
}
void TreviStem_LedRGB::LedRGB_SetColorTime (char HexColor[10],int x, int timee)
{
 ConvertHextoRGBvalue(HexColor);
 if (x==1) {
    analogWrite(14,RedValue);
    analogWrite(12,GreenValue);
    analogWrite(27,BlueValue);
    LedRGB_SetOff(1);
  }
  if (x==2) {
    analogWrite(14,RedValue);
    analogWrite(12,GreenValue);
    analogWrite(27,BlueValue);
    LedRGB_SetOff(1);
  }
  if (x==3) {
    analogWrite(22,RedValue);
    analogWrite(23,GreenValue);
    analogWrite(21,BlueValue);
    LedRGB_SetOff(3);
  }  
  if (x==4) {
  	analogWrite(14,RedValue);
    analogWrite(12,GreenValue);
    analogWrite(27,BlueValue);
    LedRGB_SetOff(1);
    
  }
  delay(timee*1000);
  
}

void TreviStem_LedRGB::LedRGB_SetIndicator( int color, int x, int Value)
{
  if (x==1) {
    switch(color)
    {
    case 1: 
        analogWrite(17, Value);
        break;
    case 2: 
        analogWrite(3, Value);
        break;
    case 3: 
        analogWrite(5, Value);
        break;
    }
  }
  if (x==2) {
    switch(color)
  {
    case 1: 
        analogWrite(17, Value);
        analogWrite(16, Value);
        break;
    case 2: 
        analogWrite(8, Value);
        break;
    case 3: 
        analogWrite(6, Value);
        break;
  }
  }
  if (x==3){
     switch(color)
  {
    case 1: 
        analogWrite(16, Value);
        break;
    case 2: 
        analogWrite(3, Value);
        analogWrite(8, Value);
        break;
    case 3: 
        analogWrite(5, Value);
        analogWrite(6, Value);
        break;
  }
  }
  
}