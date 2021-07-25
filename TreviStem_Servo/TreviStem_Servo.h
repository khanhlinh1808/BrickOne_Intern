#ifndef TREVISTEM_SERVO_H
#define TREVISTEM_SERVO_H
#include<Arduino.h>

class TreviStem_Servo
{
public:
  int setdefaultServo(int motor);
  int setdegree(int motor, int degree);
  int runServo(int direct, int motor, int degree, int x);
  int runtimeServo(int direct, int motor, int degree, int x, int delaytime);
private:
};
#endif
