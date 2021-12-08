int leitura1 = 0;
int leitura2 = 0;

void setup() {
  Serial.begin(9600); //monitor serial e taxa de atualização, padrão
}

void loop() {
  leitura1 = analogRead(A0);
  if(leitura1 > (leitura2 + 2) || leitura1 < (leitura2 - 2)) {
    leitura2 = leitura1;
    Serial.println(leitura1);
    delay(100);
  }
}
