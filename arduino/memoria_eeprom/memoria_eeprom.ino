#include <EEPROM.h> //salvar na memória sem perder o dado quando o arduino for resetado

int contador = 0;

void setup() {
  Serial.begin(9600);
  if(EEPROM[0] != 9) {
    EEPROM[0] = 9; //não tem dado salvo
    EEPROM[1] = contador; //salva o dado do contador
  }
  else {
    contador = EEPROM[1];
  }
}

void loop() {
  Serial.println(contador);
  contador++;
  EEPROM[1] = contador;
  delay(1000);
}
