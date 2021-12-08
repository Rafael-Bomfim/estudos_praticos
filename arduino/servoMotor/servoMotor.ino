//vermelho = 5v, marrom ou preto = gnd, amarelo ou laranja = pino de sinal

#include <Servo.h>

Servo motor1;
int pos = 0;

void setup() {
  motor1.attach(3); //linkar o motor com o pino 3
}

void loop() {
  for(pos = 0; pos < 180; pos+=45) {
    motor1.write(pos); //ângulo do motor
    delay(2000);
  }
  for(pos = 180; pos > 0; pos-=45) {
    motor1.write(pos); //ângulo do motor
    delay(2000);
  }
}
