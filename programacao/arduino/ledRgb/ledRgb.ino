boolean anodo_comum = true; //existe led RGB com perna positiva ou negativa, funcionam um pouco diferente

int pinoR = 11;
int pinoG = 10;
int pinoB = 9;

void setup() { 
  pinMode(pinoR, OUTPUT); //pinos funcionam como saída
  pinMode(pinoG, OUTPUT);
  pinMode(pinoB, OUTPUT);
}

void loop() {
  setCor(255,0,0); //escolher qual cor irá ligar
  delay(1000);
  setCor(0,255,0);
  delay(1000);
  setCor(0,0,255);
  delay(1000);
}

void setCor(int vermelho, int verde, int azul) { //função setCor para led de positivo comum
  if(anodo_comum == true) {
    vermelho = 255 - vermelho;
    verde = 255 - verde;
    azul = 255 - azul;
  }
  analogWrite(pinoR, vermelho);
  analogWrite(pinoG, verde);
  analogWrite(pinoB, azul);
}
