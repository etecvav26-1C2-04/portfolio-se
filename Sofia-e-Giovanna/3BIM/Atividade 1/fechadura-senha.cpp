
#include <Servo.h>
#include <Keypad.h>

Servo motor;

String senhaCorreta = "1236";
String senhaDigitada = "";

// Posições do servo
int Fechado = 0;
int Aberto = 90;


int ledVermelho = 12;
int ledVerde = 11;
int servoPin = 10;



const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad teclado = Keypad(
  makeKeymap(keys),
  rowPins,
  colPins,
  ROWS,
  COLS
);

void setup() {

  Serial.begin(9600);

  motor.attach(servoPin);

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  

  // PORTA FECHADA
  motor.write(Fechado);

  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
}

void loop() {

  char tecla = teclado.getKey();

  if (tecla) {

    if (tecla == '*') {
      senhaDigitada = "";
    }

    else if (tecla == '#') {

      if (senhaDigitada == senhaCorreta) {

        // Senha correta
        motor.write(Aberto);

        digitalWrite(ledVermelho, LOW); 
       
        digitalWrite(ledVerde, HIGH);
    

      }

      else {

        // Senha incorreta
        motor.write(Fechado);

        digitalWrite(ledVermelho, HIGH);
        
        digitalWrite(ledVerde, LOW);
       
 
      }

    }

    else if (tecla >= '0' && tecla <= '9') {

      if (senhaDigitada.length() < 4) {
        senhaDigitada += tecla;
      }

    }
  }
}
