#include <Config.h>
#include <EasyBuzzer.h>

#include "TreviStem_Buzzer.h"
uint8_t pin;
void tone() 
{
  ledcSetup(0, 2000, 8); // setup beeper
  ledcAttachPin(pin, 0); // attach beeper
  ledcWriteTone(0, freq); // play tone
}
float BuzzerSpeed = 1;
void TreviStem_Buzzer::Buzzer1(int Pin, int note, int duration)
{ 
  if (Pin == 2) pin = 8;
  if (Pin == 1) pin = 3;
  switch(duration) {
    case 5:
            tone(pin,note,1000 /BuzzerSpeed);
            delay(1000 /BuzzerSpeed);
            break;
    case 4:
            tone(pin,note,500/BuzzerSpeed);
            delay(500/BuzzerSpeed);
            break;
    case 3:
            tone(pin,note,250/BuzzerSpeed);
            delay(250/BuzzerSpeed);
            break;
    case 2:
            tone(pin,note,125/BuzzerSpeed);
            delay(125/BuzzerSpeed);
            break;
    case 1:
            tone(pin,note,62.5/BuzzerSpeed);
            delay(62.5/BuzzerSpeed);
            break;
  }
}

void TreviStem_Buzzer::Buzzer2(int Pin, int duration)
{ 
  uint8_t pin;
  if (Pin == 2) pin = 44;
  if (Pin == 1) pin = 45;
  switch(duration) {
    case 5:
            tone(pin,0,1000/BuzzerSpeed);
            delay(1000/BuzzerSpeed);
            break;
    case 4:
            tone(pin,0,500/BuzzerSpeed);
            delay(500/BuzzerSpeed);
            break;
    case 3:
            tone(pin,0,250/BuzzerSpeed);
            delay(250/BuzzerSpeed);
            break;
    case 2:
            tone(pin,0,125/BuzzerSpeed);
            delay(125/BuzzerSpeed);
            break;
    case 1:
            tone(pin,0,62.5/BuzzerSpeed);
            delay(62.5/BuzzerSpeed);
            break;
  }
}
void TreviStem_Buzzer::BuzzerHz (int Pin, int note, int duration)
{
  uint8_t pin;
  if (Pin == 2) pin = 44;
  if (Pin == 1) pin = 45;
  tone(Pin,note,duration*1000/BuzzerSpeed);
}
