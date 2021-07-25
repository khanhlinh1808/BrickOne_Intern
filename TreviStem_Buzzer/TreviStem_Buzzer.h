#ifndef TREVISTEM_BUZZER_H
#define TREVISTEM_BUZZER_H
#include<Arduino.h>

class TreviStem_Buzzer
{
public:
  void Buzzer1(int Pin, int note, int duration);
  void Buzzer2(int Pin, int duration);
  void BuzzerHz (int Pin, int note, int duration);
  float BuzzerSpeed = 1;
private:
};
#endif
