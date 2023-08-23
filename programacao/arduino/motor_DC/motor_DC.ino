int rele = 2;

void setup() {
  pinMode(rele, OUTPUT);
}

void loop() {
  digitalWrite(rele, HIGH);
  delay(3000);
  digitalWrite(rele, LOW);
  delay(3000);
}
