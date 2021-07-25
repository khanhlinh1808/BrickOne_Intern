#ifndef TREVISTEM_LEDRGB_H
#define TREVISTEM_LEDRGB_H
#include<Arduino.h>

class TreviStem_LedRGB
{
public:
  int  ConvertCharHextoNum(char hexchar);
  void ConvertHextoRGBvalue(char HexColor_temp[10]);
  void LedRGB_SetColor (char HexColor[10], int x);
  void LedRGB_SetOff(int x);
  void LedRGB_SetColorTime (char HexColor[10],int x, int timee);
  void LedRGB_SetIndicator( int color, int x, int Value);

private:
};
#endif
