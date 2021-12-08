#include <Thermistor.h>

Thermistor temp(A0); //ler a porta A0 usando a biblioteca do thermistor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temperatura = temp.getTemp();//pegar a temperatura através da biblioteca
  
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  delay(1000);
}
