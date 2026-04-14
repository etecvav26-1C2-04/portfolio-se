# Questionário

**Integrantes:**
- Sofia Franzini
- Giovanna Costa
---

## Exercício 1 — Pergunta conceitual
**Explique com suas palavras o que é Internet das Coisas (IoT) e cite um exemplo do cotidiano.**

 A Internet das Coisas (IoT) é quando objetos do dia a dia estão conectados à internet. Esses objetos podem enviar e receber dados. Esses dispositivos podem ser controlados remotamente ou funcionar de forma inteligente com base nas informações coletadas. A IoT está presente em casas, cidades e indústrias. Um exemplo comum é uma lâmpada inteligente que pode ser ligada ou desligada pelo celular. Outro exemplo é uma TV conectada à internet ou até mesmo relógios inteligentes que monitoram a saúde, como medir a pressão, os batimentos cardíacos, tempo de sono, e entre outros diversos funcionamentos. Essa tecnologia torna o dia a dia mais prático e eficiente.

---
## Exercício 2 — Pergunta de aplicação
**Descreva como um sistema embarcado poderia ser usado para automatizar a iluminação de uma casa.**

 Por exemplo, um sensor de presença pode detectar quando alguém entra em um ambiente e acender a luz automaticamente. Também é possível usar um sensor de luminosidade para acender as luzes apenas quando estiver escuro. O microcontrolador que recebe essas informações decide o que fazer com base na programação que foi feita. Esse tipo de sistema ajuda a economizar energia, evitando manter luzes acesas sem necessidade, podendo interagir com elas por aplicativos de celular. Assim, o usuário pode controlar tudo remotamente de forma prática. Isso torna a casa mais prática e inteligente para o dia a dia.

---
## Exercício 3 — Pergunta de investigação
**Utilize o simulador Wokwi ou Tinkercad para montar um circuito com um LED. Teste diferentes tempos de atraso e registre o comportamento observado.**
  
 Ao montar um simulador de circuito com LED no Tinkercad, é possível programar o LED para piscar com diferentes tempos de atraso. No simulador, os intervalos mudaram conforme modificamos o código. Quando o tempo de atraso é curto, o LED pisca rapidamente. Já com o tempo maior, o LED fica mais tempo aceso e apagado, pisca de forma mais lenta e fica perceptível. Isso mostra como o controle de tempo afeta o tempo do circuito e mostra que testar outras formas e valores no simulador, modificando alguns elementos no código nos ajuda a compreender esse simulador de forma prática.

---
## Exercício 4 — Pergunta de reflexão
**Quais são as vantagens e vantagens do uso de hardware open source em projetos de IoT?**

 O hardware open source em projetos tem como vantagem o baixo custo e a facilidade de acesso. Qualquer pessoa pode estudar, modificar e melhorar os projetos, principalmente pessoas especializadas podem ajudar com dúvidas. Mas, também há grande quantidade de documentos disponíveis na internet onde podem ser utilizados sem problemas para os usuários. Porém, uma desvantagem pode ser a falta de suporte oficial, como em questões de segurança e a confiabilidade no acesso. Além disso, alguns projetos podem não ter a mesma qualidade de produtos comerciais. Mesmo assim, são muito utilizados em projetos de IoT, principalmente para quem está começando na área.

 ---
 ## Exercício 5 — Pergunta conceitual
**Qual a função de um microcontrolador em um sistema embarcado?**

  O microcontrolador é o principal componente de um sistema embarcado, e funciona como um "cérebro". Ele é responsável por processar informações e tomar decisões com base nos dados recebidos no sistema. Recebe dados de sensores e processa as informações, executa um programa com base nas programações feitas e envia comandos para atuadores. Por exemplo, pode ligar um motor ou acender um LED. Sem o microcontrolador, o sistema não poderia ser processado por conta própria. Ele integra memória, processador e entradas/saídas em um único chip. Sendo crucial para controlar sistemas de forma rápida e eficiente.

---
## Exercício 6 — Pergunta de aplicação
**Proponha um projeto simples utilizando sensores e atuadores para resolver um problema real.**
**Projeto: Sistema de Alerta de Nível de Água**

Sistema de Alerta de Nível de Água

Problema:
Caixas d’água podem transbordar por falta de controle, causando desperdício e possíveis danos.

---

Materiais:

* Arduino Uno
* Sensor ultrassônico (HC-SR04)
* LED vermelho
* Buzzer
* Resistor (220 ohms)
* Jumpers e protoboard

Funcionamento:
O sensor mede a distância até a água.

* Se a distância for pequena (nível alto): LED acende e buzzer dispara.
* Se a distância for grande (nível baixo): tudo permanece desligado.

Montagem:

* Sensor: VCC → 5V | GND → GND | TRIG → pino 9 | ECHO → pino 10
* LED: pino 7 (com resistor) → GND
* Buzzer: pino 6 → GND

---
## Exercício 7 — Pergunta de investigação
**No simulador, adicione um botão ao circuito do LED. Programe para que o LED acenda apenas quando o botão for pressionado. Descreva o funcionamento.**

Materiais:
1 Arduino Uno
1 LED
1 Botão
1 Resistor (220 ohms)
1 Resistor para o botão (10k ohms)
Jumpers e Protoboard
Montagem:
LED:
O ânodo do LED vai para o pino digital 7 do Arduino (com resistor de 220 ohms).
O cátodo do LED vai para o GND.
Botão:
Um terminal do botão vai para o pino digital 2 do Arduino.
O outro terminal do botão vai para o GND (através de um resistor de 10k ohms).
Um resistor de 10k ohms é usado para evitar flutuação no pino (pull-down resistor).
Funcionamento do sistema:
Quando o botão é pressionado, o pino digital 2 recebe um sinal HIGH (3.3V), acionando o LED no pino 7.
Quando o botão não é pressionado, o pino 2 recebe um sinal LOW (0V), fazendo o LED permanecer apagado.

Código:

#define led 7
#define botao 2

void setup() {
  pinMode(led, OUTPUT);    // Define o pino do LED como saída
  pinMode(botao, INPUT);   // Define o pino do botão como entrada
}

void loop() {
  int estadoBotao = digitalRead(botao); // Lê o estado do botão

  if (estadoBotao == HIGH) { // Se o botão for pressionado
    digitalWrite(led, HIGH); // Acende o LED
  } else {
    digitalWrite(led, LOW);  // Caso contrário, apaga o LED
  }
}

---
## Exercício 8 — Pergunta de reflexão
**Como o movimento maker contribui para o aprendizado em tecnologia?**

O movimento maker contribui para o aprendizado em tecnologia ao incentivar o aprendizado prático, desenvolver habilidades de resolução de problemas, integrar várias áreas (como programação e eletrônica), estimular a criatividade e promover a colaboração. Ele transforma o aluno em criador ativo, o que fortalece o entendimento e a inovação.

---
## Exercício 9 — Pergunta de aplicação
**Explícita como sensores e atuadores trabalham juntos em um sistema de supervisão automatizado.**

Sensores e atuadores trabalham juntos em um sistema automatizado formando um ciclo:

Sensores coletam dados do ambiente (medem).
O sistema de controle analisa essas informações (decide).
Atuadores executam ações com base nas decisões (agem).

Tudo ocorre continuamente em um ciclo de feedback, garantindo que o sistema funcione de forma automática e ajustada às condições desejadas.

---
## Exercício 10 — Pergunta de investigação
**Explore um projeto pronto no Wokwi ou Tinkercad. Modifique algum parâmetro (tempo, sensor, etc.) e descreva o que mudou.**

O projeto escolhido foi um de Semáforo com Arduino (LEDs vermelho, amarelo e verde), e o que foi mudado é o tempo que o semáforo amarelo ficou aceso.




  
