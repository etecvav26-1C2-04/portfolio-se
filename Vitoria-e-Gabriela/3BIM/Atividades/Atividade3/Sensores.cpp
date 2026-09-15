#include <Servo.h>

Servo meuServo;

// Sensores
const int LDR = A0;
const int TMP36 = A3;

// LEDs
const int LED_VERMELHO = 4;
const int LED_VERDE = 5;

// Servo
const int PINO_SERVO = 9;

void setup()
{
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  meuServo.attach(PINO_SERVO);

  Serial.begin(9600);
}

void loop()
{
  // LER LUZ
  int valorLuz = analogRead(LDR);

  // LER TEMPERATURA
  int leituraTMP = analogRead(TMP36);

  float tensao = leituraTMP * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100.0;

  // Mostrar os valores
  Serial.print("Luz: ");
  Serial.print(valorLuz);

  Serial.print(" | Temperatura: ");
  Serial.println(temperatura);

  // CONDIÇÃO
  if (valorLuz > 750 || temperatura > 28)
  {
    // FECHAR
    meuServo.write(0);

    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_VERDE, LOW);
  }
  else
  {
    // ABRIR
    meuServo.write(90);

    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
  }

  delay(500);
}
