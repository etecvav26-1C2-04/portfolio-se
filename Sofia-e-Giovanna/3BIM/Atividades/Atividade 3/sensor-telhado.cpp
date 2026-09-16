#include <Servo.h>

Servo servoTelhado;

int ldr = A0;
int sensorTemperatura = A3;

int LedVermelho = 4;
int LedVerde = 5;

int LUZ = 6;          
int pinoServo = 8;

int TelhadoFec = 0;
int TelhadoAberto = 90;


int limiteLuminosidade = 750;
float limiteTemperatura = 28.0;


void setup()
{
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LUZ, OUTPUT);

  servoTelhado.attach(pinoServo);

  Serial.begin(9600);

  servoTelhado.write(TelhadoFec);

  digitalWrite(LedVermelho, HIGH);
  digitalWrite(LedVerde, LOW);

  digitalWrite(LUZ, LOW);
}


void loop()
{

  int luminosidade = analogRead(ldr);
  

  int leituraTemp = analogRead(sensorTemperatura);

  float tensao = leituraTemp * (5.0 / 1023.0);

  float temperatura = (tensao - 0.5) * 100.0;


  Serial.print("Luminosidade: ");
  Serial.print(luminosidade);

  Serial.print(" | Temperatura: ");
  Serial.print(temperatura);

  
  if (luminosidade < limiteLuminosidade)
  {
    digitalWrite(LUZ, HIGH);
  }
  else
  {
    digitalWrite(LUZ, LOW);
  }


  if (luminosidade > limiteLuminosidade ||
      temperatura > limiteTemperatura){

    servoTelhado.write(TelhadoFec);

    digitalWrite(LedVermelho, HIGH);
    digitalWrite(LedVerde, LOW);
  }

  else{
    servoTelhado.write(TelhadoAberto);
   
    digitalWrite(LedVerde, HIGH);
    digitalWrite(LedVermelho, LOW);

  }


  delay(500);
}

