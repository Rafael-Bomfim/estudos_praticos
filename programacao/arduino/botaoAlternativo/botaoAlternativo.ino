int led = 2;
int botao = 3;
int pressionado = 0;
int ligado = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
 pressionado = digitalRead(botao); //lendo botão
 if(pressionado == HIGH) { //botão pressionado
  delay(500);
  switch(ligado) {
    case 0:
      digitalWrite(led, HIGH);
      ligado = 1;
      break;

    case 1:
      digitalWrite(led, LOW);
      ligado = 0;
      break;
  }  
 }
}
