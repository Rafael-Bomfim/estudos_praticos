int buzzer = 10;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, 2500, 100); //pino, frequencia e duração
  delay(1000);
 /* noTone(buzzer); parar*/
  tone(buzzer, 1500);
  delay(200);
  tone(buzzer, 2000);
  delay(200);
}
