int a = 3, b = 4, c = 5, d = 6, e = 7, f = 8, g = 9;
 //linhas / colunas
int num[10][7] { // matriz
  {a,b,c,d,e,f}, //zero
  {b,c}, //um
  {a,b,e,d,g}, //dois
  {a,b,c,d,g}, //tres
  {b,c,f,g}, //quatro
  {a,c,d,f,g}, //cinco
  {a,c,d,e,f,g}, //seis
  {a,b,c}, //sete
  {a,b,c,d,e,f,g}, //oito
  {a,b,c,f,g} //nove
};

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {          
 for(int i = 0; i < 10; i++) { //for com +1 comandos e crescente
    apaga();
    numero(i);
    delay(1000);
 }
 for(int i = 10; i > 0; i--) { //decrescente
    apaga();
    numero(i);
    delay(1000);
 }
}

void apaga(){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void numero(int n) {
  for(int i = 0; i < 7; i++) digitalWrite(num[n][i], LOW); //for com um comando
}
