// C++ code
//
int Led1 = 7;
int Led2 = 6;
int Led3 = 5;
int Led4 = 8;
int Led5 = 9;
int Led6 = 10;
int Led7 = 11;
int Botao = 2;

void setup(){
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  pinMode(Led4,OUTPUT);
  pinMode(Led5,OUTPUT);
  pinMode(Led6,OUTPUT);
  pinMode(Led7,OUTPUT);
  pinMode(Botao,INPUT_PULLUP);
  
  randomSeed(analogRead(0));
}

void loop(){
  if(digitalRead(Botao) == HIGH) {
    sorteia();
  }
     }

void sorteia(){
  int numSorteado = random (1,8);
  
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, LOW);
  digitalWrite(Led6, LOW);
  digitalWrite(Led7, LOW);
  
  if(numSorteado==1)
  {
    digitalWrite(Led4,HIGH);
  }
  
  if(numSorteado==2)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led7,HIGH);
  }
  
  if(numSorteado==3)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led4,HIGH);
    digitalWrite(Led7,HIGH);
  }
  
  if(numSorteado==4)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led3,HIGH);
    digitalWrite(Led5,HIGH);
    digitalWrite(Led7,HIGH);
  }
  
  if(numSorteado==5)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led3,HIGH);
    digitalWrite(Led5,HIGH);
    digitalWrite(Led7,HIGH);
    digitalWrite(Led4,HIGH);
  }
  
  if(numSorteado==6)
  {
    digitalWrite(Led1,HIGH);
    digitalWrite(Led2,HIGH);
    digitalWrite(Led3,HIGH);
    digitalWrite(Led5,HIGH);
    digitalWrite(Led6,HIGH);
    digitalWrite(Led7,HIGH);
  }
  
  delay(3000);
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,LOW);
    digitalWrite(Led3,LOW);
    digitalWrite(Led4,LOW);
    digitalWrite(Led5,LOW);
    digitalWrite(Led6,LOW);
    digitalWrite(Led7,LOW);
  }
