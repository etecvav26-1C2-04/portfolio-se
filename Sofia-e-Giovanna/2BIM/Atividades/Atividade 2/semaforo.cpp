// === Pinos ===
int verdeCarro1    = 3;
int amareloCarro1  = 4;
int vermelhoCarro1 = 5;
int verdeCarro2    = 6;
int amareloCarro2  = 7;
int vermelhoCarro2 = 8;
int verdePedestre    = 9;
int vermelhoPedestre = 10;
int botao = 12;

bool pedidoPedestre = false;

// ─────────────────────────────────────────
// Estados dos semáforos de carros
// ─────────────────────────────────────────
void carros1Verde() {
  digitalWrite(verdeCarro1,    HIGH);
  digitalWrite(amareloCarro1,  LOW);
  digitalWrite(vermelhoCarro1, LOW);
  digitalWrite(verdeCarro2,    LOW);
  digitalWrite(amareloCarro2,  LOW);
  digitalWrite(vermelhoCarro2, HIGH);
}

void carros1Amarelo() {
  digitalWrite(verdeCarro1,    LOW);
  digitalWrite(amareloCarro1,  HIGH);
  digitalWrite(vermelhoCarro1, LOW);
  digitalWrite(verdeCarro2,    LOW);
  digitalWrite(amareloCarro2,  LOW);
  digitalWrite(vermelhoCarro2, HIGH);
}

void carros2Verde() {
  digitalWrite(verdeCarro1,    LOW);
  digitalWrite(amareloCarro1,  LOW);
  digitalWrite(vermelhoCarro1, HIGH);
  digitalWrite(verdeCarro2,    HIGH);
  digitalWrite(amareloCarro2,  LOW);
  digitalWrite(vermelhoCarro2, LOW);
}

void carros2Amarelo() {
  digitalWrite(verdeCarro1,    LOW);
  digitalWrite(amareloCarro1,  LOW);
  digitalWrite(vermelhoCarro1, HIGH);
  digitalWrite(verdeCarro2,    LOW);
  digitalWrite(amareloCarro2,  HIGH);
  digitalWrite(vermelhoCarro2, LOW);
}

void todosVermelho() {
  digitalWrite(verdeCarro1,    LOW);
  digitalWrite(amareloCarro1,  LOW);
  digitalWrite(vermelhoCarro1, HIGH);
  digitalWrite(verdeCarro2,    LOW);
  digitalWrite(amareloCarro2,  LOW);
  digitalWrite(vermelhoCarro2, HIGH);
}

// ─────────────────────────────────────────
// Sequência do pedestre
// ─────────────────────────────────────────
void atravessarPedestre() {
  todosVermelho();

  // Verde pedestre — 4 segundos
  digitalWrite(vermelhoPedestre, LOW);
  digitalWrite(verdePedestre,    HIGH);
  delay(4000);

  // Verde apaga, vermelho pisca por 2 segundos
  digitalWrite(verdePedestre, LOW);
  for (int i = 0; i < 4; i++) {
    digitalWrite(vermelhoPedestre, HIGH);
    delay(250);
    digitalWrite(vermelhoPedestre, LOW);
    delay(250);
  }

  // Vermelho fixo — pedestre parado
  digitalWrite(vermelhoPedestre, HIGH);
}

// ─────────────────────────────────────────
void setup() {
  pinMode(verdeCarro1,    OUTPUT);
  pinMode(amareloCarro1,  OUTPUT);
  pinMode(vermelhoCarro1, OUTPUT);
  pinMode(verdeCarro2,    OUTPUT);
  pinMode(amareloCarro2,  OUTPUT);
  pinMode(vermelhoCarro2, OUTPUT);
  pinMode(verdePedestre,    OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);

  // INPUT_PULLUP → resistor interno ativado
  // botão ligado ao GND: solto = HIGH, pressionado = LOW
  pinMode(botao, INPUT);

  // Estado inicial
  digitalWrite(vermelhoPedestre, HIGH);
  digitalWrite(verdePedestre,   LOW);
}

// ─────────────────────────────────────────
void loop() {

  // ── FASE 1: Carro 1 verde ───────────────
  carros1Verde();
  delay(5000);
   if (digitalRead(botao) == HIGH) {
      pedidoPedestre = true;
    }

  carros1Amarelo();
  delay(2000);
   if (digitalRead(botao) == HIGH) {
      pedidoPedestre = true;
    }

  // Ambos vermelho — verifica pedestre
//  todosVermelho();
  if (pedidoPedestre) {
    pedidoPedestre = false;
    atravessarPedestre();
}
 

  // ── FASE 2: Carro 2 verde ───────────────
  carros2Verde();
  delay(5000);
   if (digitalRead(botao) == HIGH) {
      pedidoPedestre = true;
    }

  carros2Amarelo();
  delay(2000);
   if (digitalRead(botao) == HIGH) {
      pedidoPedestre = true;
    }

  // Ambos vermelho — verifica pedestre
//  todosVermelho();
  if (pedidoPedestre) {
    pedidoPedestre = false;
    atravessarPedestre();
  }
}
