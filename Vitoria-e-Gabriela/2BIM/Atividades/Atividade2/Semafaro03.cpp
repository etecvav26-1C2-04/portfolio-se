int verdeCarro1 = 3;
int amareloCarro1 = 4;
int vermelhoCarro1 = 5;

int verdeCarro2 = 6;
int amareloCarro2 = 7;
int vermelhoCarro2 = 8;

int verdePedestre = 9;
int vermelhoPedestre = 10;
int botao = A0;

bool pedidoPedestre = false;

void setup() {
  pinMode(verdeCarro1, OUTPUT);
  pinMode(amareloCarro1, OUTPUT);
  pinMode(vermelhoCarro1, OUTPUT);
  pinMode(verdeCarro2, OUTPUT);
  pinMode(amareloCarro2, OUTPUT);
  pinMode(vermelhoCarro2, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);
  pinMode(botao, INPUT);

  digitalWrite(vermelhoPedestre, HIGH);
  digitalWrite(verdePedestre, LOW);
}

void loop() {
  if (digitalRead(botao) == HIGH) {
    pedidoPedestre = true;
  }

  // Verde dos carros
  digitalWrite(verdeCarro1, HIGH);
  digitalWrite(verdeCarro2, HIGH);
  digitalWrite(amareloCarro1, LOW);
  digitalWrite(amareloCarro2, LOW);
  digitalWrite(vermelhoCarro1, LOW);
  digitalWrite(vermelhoCarro2, LOW);
  delay(5000);

  // Verifica botão após verde
  if (pedidoPedestre) {
    atravessarPedestre();
    pedidoPedestre = false;
    return;
  }

  // Amarelo dos carros
  digitalWrite(verdeCarro1, LOW);
  digitalWrite(verdeCarro2, LOW);
  digitalWrite(amareloCarro1, HIGH);
  digitalWrite(amareloCarro2, HIGH);
  delay(2000);

  // Vermelho dos carros
  digitalWrite(amareloCarro1, LOW);
  digitalWrite(amareloCarro2, LOW);
  digitalWrite(vermelhoCarro1, HIGH);
  digitalWrite(vermelhoCarro2, HIGH);
  delay(1000);

  // Verifica botão após vermelho
  if (pedidoPedestre) {
    atravessarPedestre();
    pedidoPedestre = false;
  }

  digitalWrite(vermelhoCarro1, LOW);
  digitalWrite(vermelhoCarro2, LOW);
}

void atravessarPedestre() {
  // Garante carros parados
  digitalWrite(verdeCarro1, LOW);
  digitalWrite(verdeCarro2, LOW);
  digitalWrite(amareloCarro1, LOW);
  digitalWrite(amareloCarro2, LOW);
  digitalWrite(vermelhoCarro1, HIGH);
  digitalWrite(vermelhoCarro2, HIGH);

  // Verde pedestre por 4 segundos
  digitalWrite(vermelhoPedestre, LOW);
  digitalWrite(verdePedestre, HIGH);
  delay(4000);

  // Vermelho piscando por 2 segundos
  digitalWrite(verdePedestre, LOW);
  for (int i = 0; i < 4; i++) {
    digitalWrite(vermelhoPedestre, HIGH);
    delay(250);
    digitalWrite(vermelhoPedestre, LOW);
    delay(250);
  }

  // Volta vermelho fixo
  digitalWrite(vermelhoPedestre, HIGH);
  digitalWrite(vermelhoCarro1, LOW);
  digitalWrite(vermelhoCarro2, LOW);
}
