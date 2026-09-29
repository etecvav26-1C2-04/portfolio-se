
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {

  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);

}

void loop() {

  servo1.write(94);
  servo2.write(144);
  servo3.write(90);
  servo4.write(95);

  delay(1000);

  servo1.write(0);
  delay(400);

  servo3.write(110);
  delay(400);

  servo2.write(137);
  delay(400);

  servo3.write(143);
  delay(400);

  servo4.write(180);
  delay(400);

  servo3.write(110);
  delay(400);

  servo2.write(165);
  delay(400);

  servo3.write(65);
  delay(400);

  servo1.write(94);
  delay(300);

  servo2.write(148);
  servo3.write(90);
  delay(200);

  servo4.write(108);
  delay(400);

}


