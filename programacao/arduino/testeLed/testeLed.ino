void setup() { //executa uma vez quando ligada
  pinMode (13, OUTPUT); //pino 13 vai funcionar como saída
}

void loop() {
  digitalWrite(13, HIGH); //pino 13 ligado
  delay(1000); //tempo de espera 1000 milisegundos = 1 segundo
  digitalWrite(13, LOW); //pino 13 desliga
  delay(1000);
}
