// C++ code
// Semafaro 2

int verdeCarro1 = 3;
int amareloCarro1 = 4;
int vermelhoCarro1 = 5;
  
int verdeCarro2 = 6;
int amareloCarro2 = 7;
int vermelhoCarro2 = 8;

int verdePedestre = 9;
int vermelhoPedestre = 10;

void setup() {
  pinMode(verdeCarro1, OUTPUT);
  pinMode(amareloCarro1, OUTPUT);
  pinMode(vermelhoCarro1, OUTPUT);
  pinMode(verdeCarro2, OUTPUT);
  pinMode(amareloCarro2, OUTPUT);
  pinMode(vermelhoCarro2, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);
}

void loop() {

  // CARRO VERDE/ PEDESTRE VERMELHO
  digitalWrite(verdeCarro1, HIGH);
  digitalWrite(amareloCarro1, LOW);
  digitalWrite(vermelhoCarro1, LOW);
  
  digitalWrite(verdeCarro2, HIGH);
  digitalWrite(amareloCarro2, LOW);
  digitalWrite(vermelhoCarro2, LOW);

  digitalWrite(verdePedestre, LOW);
  digitalWrite(vermelhoPedestre, HIGH);

  delay(5000);


  // CARRO AMARELO/ PEDESTRE VERMELHO
  digitalWrite(verdeCarro1, LOW);
  digitalWrite(amareloCarro1, HIGH);
  digitalWrite(vermelhoCarro1, LOW);
  
  digitalWrite(verdeCarro2, LOW);
  digitalWrite(amareloCarro2, HIGH);
  digitalWrite(vermelhoCarro2, LOW);

  digitalWrite(verdePedestre, LOW);
  digitalWrite(vermelhoPedestre, HIGH);

  delay(2000);


  // CARRO VERMELHO/ PEDESTRE VERDE
  digitalWrite(verdeCarro1, LOW);
  digitalWrite(amareloCarro1, LOW);
  digitalWrite(vermelhoCarro1, HIGH);
  
  digitalWrite(verdeCarro2, LOW);
  digitalWrite(amareloCarro2, LOW);
  digitalWrite(vermelhoCarro2, HIGH);

  digitalWrite(verdePedestre, HIGH);
  digitalWrite(vermelhoPedestre, LOW);

  delay(4000);
  
  // PEDESTRE VERMELHO PISCANDO
  digitalWrite(verdePedestre, LOW);
  digitalWrite(vermelhoPedestre, HIGH);
  delay(500);
  
  digitalWrite(vermelhoPedestre, LOW);
  delay(500);
  
  digitalWrite(vermelhoPedestre, HIGH);
  delay(500);
  
  digitalWrite(vermelhoPedestre, LOW);
  delay(500);
}
