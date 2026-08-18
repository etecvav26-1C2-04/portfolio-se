# IoT — Conceitos Básicos, Eletricidade, Eletrônica, Sensores e Atuadores

## Questões

### Questão 1 — O LED acendeu. Está tudo certo?

Um grupo ligou um LED diretamente a um pino de um microcontrolador. O LED acendeu normalmente.

Um dos alunos afirmou:

> "Se acendeu, significa que a ligação está correta."

**Resposta:**

Não concordamos. O fato de o LED acender não significa que a ligação esteja correta. É importante conhecer a tensão, 
a corrente e a resistência, porque uma corrente muito alta pode danificar o LED ou até o pino do microcontrolador. Por isso, normalmente é usada uma resistência em série para limitar a corrente e proteger os componentes. Mesmo funcionando no começo, o circuito pode apresentar problemas ou queimar com o tempo.

### Questão 2 - Escolhendo sensores
Uma escola deseja desenvolver um sistema para evitar que as luzes das salas permaneçam ligadas quando não houver ninguém no ambiente.

**Reposta:**

 Qual informação precisa ser detectada? → Se há ou não pessoas na sala;
 Qual sensor poderia ser utilizado? → Sensor de presença/movimento (PIR);
 Qual seria a função do microcontrolador? → Verificar a presença e controlar a luz;
 Qual seria o atuador? → Relé que controla a lâmpada;
 Que decisões o programa precisaria tomar? → Se houver alguém, ligar a luz; se não houver, desligar;

ENTRADA → PROCESSAMENTO → SAÍDA: 
 Sensor de presença → Microcontrolador → Relé/Lâmpada
