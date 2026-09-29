// C++ code
// 

#include <Servo.h>

int Led1 = 2;
int Led2 = 3;
int Led3 = 4;
int Led4 = 5;
int Led5 = 6;
int Led6 = 7;
int Led7 = 8;

int Botao = 9;
int  sensor = 12;
Servo servo1;

long readUltrassonicDistance(int triggerPin, int echoPin)
{
pinMode(triggerPin, OUTPUT); 
digitalWrite(triggerPin, LOW); 
delayMicroseconds(2); 
digitalWrite(triggerPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(triggerPin, LOW); 
pinMode(echoPin, INPUT);
return pulseIn(echoPin, HIGH);
}


void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  
  pinMode(Botao, INPUT);
  
}

void loop()
{
  digitalWrite(Led1, HIGH);
  delay(3000);
  digitalWrite(Led2, LOW);
  delay(1000);
}
