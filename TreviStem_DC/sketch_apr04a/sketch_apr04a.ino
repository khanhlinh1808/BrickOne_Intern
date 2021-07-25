int motor1Pin1 = 17; 
int motor1Pin2 = 15;
int enable1Pin = 18; 

int motor1Pin3 = 16; 
int motor1Pin4 = 4;
int enable2Pin = 5;
const int freq = 30000;
const int pwmChannel= 0;
//const int pwmChannel_1= 1;
const int resolution = 8;
void setup() 
{
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
  ledcSetup(pwmChannel, freq, resolution);
  //ledcSetup(pwmChannel, freq, resolution);
  ledcAttachPin(enable1Pin, pwmChannel);
  pinMode(motor1Pin3, OUTPUT);
  pinMode(motor1Pin4, OUTPUT);
  pinMode(enable2Pin, OUTPUT);
  ledcAttachPin(enable2Pin, pwmChannel);
}

void loop() 
{
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  delay(1000);
  ledcWrite(pwmChannel,225);
  digitalWrite(motor1Pin3, LOW);
  digitalWrite(motor1Pin4, HIGH);
  ledcWrite(pwmChannel,225);
  delay(1000);
}
