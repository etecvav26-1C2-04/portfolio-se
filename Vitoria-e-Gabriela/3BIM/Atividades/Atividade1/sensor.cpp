#include <Servo.h>

// LEDs do dado
int Led1 = 8;
int Led2 = 7;
int Led3 = 6;
int Led4 = 5;
int Led5 = 9;
int Led6 = 10;
int Led7 = 11;

// Servo
Servo servo1;
int servoPin = 12;

// Variável para armazenar a distância
float Centimetro;


// Função para leitura do sensor ultrassônico
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
  // Configuração dos LEDs
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);

  // Configuração do servo
  servo1.attach(servoPin);

  // Servo começa fechado
  servo1.write(0);

  // Inicializa o gerador de números aleatórios
  randomSeed(analogRead(A1));
}


void loop()
{
  // Faz a leitura da distância
  Centimetro = 0.01723 * readUltrassonicDistance(A0, A0);

  // Se a distância for menor que 40 cm
  if (Centimetro < 40)
  {
    sorteia();

    // Evita vários sorteios seguidos
    delay(2000);
  }
}


void sorteia()
{
  // Sorteia um número de 1 até 6
  int numSorteado = random(1, 7);


  // Número 1
  if (numSorteado == 1)
  {
    digitalWrite(Led4, HIGH);
  }


  // Número 2
  if (numSorteado == 2)
  {
    digitalWrite(Led1, HIGH);
    digitalWrite(Led7, HIGH);
  }


  // Número 3
  if (numSorteado == 3)
  {
    digitalWrite(Led1, HIGH);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led7, HIGH);
  }


  // Número 4
  if (numSorteado == 4)
  {
    digitalWrite(Led1, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led7, HIGH);
  }


  // Número 5
  if (numSorteado == 5)
  {
    digitalWrite(Led1, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led4, HIGH);
  }


  // Número 6
  if (numSorteado == 6)
  {
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
  }


  // Se o número for PAR, libera o prêmio
  if (numSorteado % 2 == 0)
  {
    // Converte o número sorteado em uma posição do servo
    int posicaoServo = map(numSorteado, 2, 6, 0, 180);

    // Movimenta o servo para a posição calculada
    servo1.write(posicaoServo);

    delay(1000);

    // Volta o servo para a posição inicial
    servo1.write(0);
  }


  // Mantém o resultado aparecendo
  delay(1250);


  // Apaga todos os LEDs
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, LOW);
  digitalWrite(Led6, LOW);
  digitalWrite(Led7, LOW);
}
