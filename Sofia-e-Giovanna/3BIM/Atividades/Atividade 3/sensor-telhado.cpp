#include <Servo.h>

Servo servoTelhado;

const int ldr = A0;
const int sensorTemperatura = A3;

const int LedVermelho = 4;
const int LedVerde = 5;

const int LUZ = 6;          
const int pinoServo = 8;

const int TelhadoFec = 0;
const int TelhadoAberto = 90;


const int limiteLuminosidade = 750;
const float limiteTemperatura = 28.0;


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


