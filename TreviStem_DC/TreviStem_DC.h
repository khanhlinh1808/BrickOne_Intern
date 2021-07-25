#ifndef TREVISTEM_DC_H
#define TREVISTEM_DC_H
#include<Arduino.h>

class TreviStem_DC
{
public:
  void RunDC(uint8_t direct, uint8_t Pin, uint8_t power);
  void setdefaultDC(uint8_t Pin);
  void stopDC(uint8_t Pin);
private:
};
#endif
