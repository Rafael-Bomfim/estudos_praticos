int verdA = 2;
int amaA  = 3;
int vermA = 4;
int verdB = 6;
int amaB  = 7;
int vermB = 8;
int verdC = 11;
int amaC  = 12;
int vermC = 13;

void setup () {
  pinMode(verdA, OUTPUT); //Verde A
  pinMode(amaA,  OUTPUT); //Amarelo A
  pinMode(vermA, OUTPUT); // Vermelho A
  pinMode(verdB, OUTPUT); //Verde B
  pinMode(amaB,  OUTPUT); //Amarelo B
  pinMode(vermB, OUTPUT); //Vermelho B
  pinMode(verdC, OUTPUT); //Verde C
  pinMode(amaC,  OUTPUT); //Amarelo C
  pinMode(vermC, OUTPUT); //Vermelho C
}

void loop() {
  digitalWrite(verdA, HIGH);
  digitalWrite(vermB, HIGH);
  digitalWrite(vermC, HIGH);
  delay(30000); // 30 segundo
  digitalWrite(verdA, LOW);
  digitalWrite(amaA, HIGH);
  delay(10000); // 10 segundos
  digitalWrite(vermB, LOW);
  digitalWrite(verdB, HIGH);
  digitalWrite(amaA, LOW);
  digitalWrite(vermA, HIGH);
  delay(30000);
  digitalWrite(verdB, LOW);
  digitalWrite(amaB, HIGH);
  delay(10000);
  digitalWrite(amaB, LOW);
  digitalWrite(vermB, HIGH);
  digitalWrite(vermC, LOW);
  digitalWrite(verdC, HIGH);
  delay(30000);
  digitalWrite(verdC, LOW);
  digitalWrite(amaC, HIGH);
  delay(10000);
  digitalWrite(vermA, LOW);
  digitalWrite(amaC, LOW);
}
