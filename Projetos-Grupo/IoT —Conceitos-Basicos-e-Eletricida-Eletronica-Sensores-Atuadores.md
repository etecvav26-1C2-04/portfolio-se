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

 ### Questão 3 — Sensor ou atuador?
 Um projeto possui os seguintes componentes:
  - sensor de temperatura;
  - sensor de luminosidade;
  - botão;
  - motor;
  - LED;
  - buzzer;
  - ESP32.
    
Classifiquem cada componente como:
  - entrada;
  - processamento;
  - saída.

**Resposta:**


|       Componente	       |     Classificação	    |
|-------------------------|-----------------------|
| Sensor de temperatura 	 |        Entrada	       |
|Sensor de luminosidade   |        Entrada        |
|Botão                    |        Entrada	       |
|ESP32	                   |     Processamento	    |
|Motor	                   |         Saída	        |
|LED	                     |         Saída         |
|Buzzer	                  |         Saída         |

Por que um mesmo projeto pode precisar de vários sensores e vários atuadores ao mesmo tempo?

Porque um projeto pode precisar coletar várias informações do ambiente e também realizar diferentes ações. Cada sensor obtém um tipo diferente de informação.
Um exemplos, é uma estufa automatizada, um sensor de temperatura pode verificar o calor e um sensor de luminosidade pode verificar a quantidade de luz. 

### Questão 4 — Automatizar tudo é sempre melhor?
Imagine um sistema de irrigação que utiliza um sensor de umidade para ligar automaticamente uma bomba de água.

Um estudante sugere:

"Sempre que o sensor indicar solo seco, a bomba deve ligar imediatamente."

Essa regra é suficiente?

Discutam outros fatores que poderiam ser considerados antes de permitir que o sistema ligue automaticamente a bomba.

**Resposta:**
A regra pura não é suficiente. Automatizações cegas geram desperdício, acidentes ou quebra de equipamentos.

Fatores cruciais a considerar
Defeito no sensor: se o sensor quebrar e marcar "solo seco" continuamente, a bomba queimará por trabalhar sem parar
Duração e frequência: a irrigação deve durar apenas o tempo necessário para saturar a terra, e não rodar indefinidamente
Disponibilidade de água: ligar a bomba sem água no reservatório (trabalho a seco) destrói o motor — é preciso um sensor de nível d'água
Horário: irrigar sob sol forte de meio-dia evapora a água rapidamente e pode queimar as folhas das plantas; o ideal é irrigar no início da manhã ou fim da tarde
Acionamento manual: o operador precisa ter a opção de ligar/desligar a bomba para manutenção ou testes
Falha na comunicação: o sistema deve entrar em estado seguro (desligado) se perder a leitura do sensor

### Questão 5 — Quando um projeto se torna IoT?
Os dois sistemas utilizam sensores e microcontroladores.

Podemos considerar os dois como sistemas de IoT?

Discutam quais características tornam um dispositivo simplesmente eletrônico ou automatizado e quais características o aproximam do conceito de Internet das Coisas.

**Resposta:**

Não, apenas o Sistema B é um sistema de Internet das Coisas (IoT).

Diferenças de arquitetura e conceito

Sistema A — Eletrônica / Automação Local O Arduino lê o sensor e aciona o LED localmente. Os dados nascem e morrem dentro do próprio circuito. Não há conectividade de rede, armazenamento em nuvem nem acesso remoto. É um sistema embarcado isolado.

Sistema B — Internet das Coisas (IoT) O ESP32 coleta os dados e usa a rede Wi-Fi para enviá-los à internet. Isso permite monitoramento à distância, armazenamento de histórico, envio de alertas no celular e integração com outros serviços web.

O que define a IoT
O diferencial da Internet das Coisas não é ter microcontroladores ou sensores, mas sim a conectividade e a troca de dados em rede. Para ser IoT, o dispositivo precisa se comunicar com outros sistemas via internet, permitindo controle, análise e monitoramento remoto.













 
 
