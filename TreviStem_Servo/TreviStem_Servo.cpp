#include <ESP32Servo360.h>
#include "TreviStem_Servo.h"

ESP32Servo360 myservo3;
ESP32Servo360 myservo4;
ESP32Servo360 myservo5;
int TreviStem_Servo::setdefaultServo(int motor)
{
  myservo3.attach(27,530,2600);
  myservo4.attach(32,530,2600);
  myservo5.attach(21,530,2600);
  if (motor == 1) myservo3.write(90); 
  if (motor == 2) myservo4.write(90); 
  if (motor == 3) myservo5.write(90);

  delay(300);
  return 90;
}

int TreviStem_Servo::setdegree(int motor, int degree)
{
  myservo3.attach(27,530,2600);
  myservo4.attach(32,530,2600);
  myservo5.attach(21,530,2600);
  if (motor == 1) myservo3.write(degree); 
  if (motor == 2) myservo4.write(degree); 
  if (motor == 3) myservo5.write(degree);
  delay(degree*3);
  return 90;
}
int TreviStem_Servo::runServo(int direct, int motor, int degree, int x)
{
  myservo3.attach(27,530,2600);
  myservo4.attach(32,530,2600);
  myservo5.attach(21,530,2600);
  if (direct == 0 && (x + degree) <= 180) 
  {   
      x += degree ;
      if (motor == 1) myservo3.write(x);
      if (motor == 2) myservo4.write(x);
      if (motor == 3) myservo5.write(x);  
  }
  if (direct == 0 && (x + degree) > 180) 
  {   
      x += degree ;
      if (motor == 1) myservo3.write(180);
      if (motor == 2) myservo4.write(180);
      if (motor == 3) myservo5.write(180);      
    x = 180;
  }
  if (direct == 1 && (x - degree) >= 0)
  {
      x -= degree;           
      if (motor == 1) myservo3.write(x);
      if (motor == 2) myservo4.write(x);
      if (motor == 3) myservo5.write(x);                 
  }
  if (direct == 1 && (x - degree) < 0)
  {
      x -= degree;           
      if (motor == 1) myservo3.write(0);
      if (motor == 2) myservo4.write(0);
      if (motor == 3) myservo5.write(0);                 
    x = 0;
  }
  delay(200 + degree * 3);
  return x;
}

int TreviStem_Servo::runtimeServo(int direct, int motor, int degree, int x, int delaytime){
  myservo3.attach(27,530,2600);
  myservo4.attach(32,530,2600);
  myservo5.attach(21,530,2600);
  Serial.println(10);
  int servodelay;
  servodelay = ( delaytime * 1000 ) / degree;
  if (direct == 0 && (x + degree) <= 180)
  {
    for (int i = x; i <= x + degree ; i++)
        {
            if (motor == 1) myservo3.write(i);
            if (motor == 2) myservo4.write(i);
            if (motor == 3) myservo5.write(i);
            delay(servodelay);
        }
        x += degree ;
      return x;
  }
  if (direct == 0 && (x + degree) > 180)
  {
    for (int i = x ; i <= 180 ; i++)
        {
            if (motor == 1) myservo3.write(i);
            if (motor == 2) myservo4.write(i);
            if (motor == 3) myservo5.write(i);
            delay(servodelay);
        }
      return 180;
  }
  if (direct == 1 && (x - degree) >= 0)
  {
    for (int i = x ;i >= x - degree; i--)
        {
            if (motor == 1) myservo3.write(i);
            if (motor == 2) myservo4.write(i);
            if (motor == 3) myservo5.write(i);
            delay(servodelay);
        }
        x -= degree;
     return x;
  }
  if (direct == 1 && (x - degree) < 0)
  {
    for (int i = x ;i >= 0; i--)
        {
            if (motor == 1) myservo3.write(i);
            if (motor == 2) myservo4.write(i);
            if (motor == 3) myservo5.write(i);
            delay(servodelay);
        }
     return 0;
  }
}
