#include <LiquidCrystal.h>

LiquidCrystal lcd (2,3,4,5,6,7);

int efeito = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Display lcd ");//escreve um texto no lcd;
  delay(2000);
  //lcd.clear();//limpa o lcd e o cursor volta para (0,0);
  lcd.setCursor(1, 1); //define a posição do cursor;
  //lcd.home();//coloca o cursor no (0,0);
  //lcd.blink();//mostra o cursor piscando;
}

void loop() {

  if (efeito == 1) {
    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);
  }
  if (efeito == 2) {
  lcd.scrollDisplayLeft();
  delay(500);
  }
  if (efeito == 3) {
    lcd.scrollDisplayRight();
    delay(250);
  }
}