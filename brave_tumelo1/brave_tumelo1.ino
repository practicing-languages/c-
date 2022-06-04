#include <LiquidCrystal.h>
#define led_R 11
#define led_G 12
#define led_B 13
#define pot A0

int valorpot = 0;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup ()
{
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  pinMode(pot, INPUT);
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
}
void loop() {
  valorpot = analogRead(pot);

  if (valorpot > 0 < 127) //preto
  {
    digitalWrite (led_R, LOW);
    digitalWrite (led_G, LOW);
    digitalWrite (led_B, LOW);
    lcd.begin(16,2);
lcd.clear();
    
    lcd.setCursor(3, 0);
    lcd.print("0R 0G 0B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:PRETO");
    delay(3000);

  }
  if (valorpot > 127 < 254) //AZUL
  {
    digitalWrite (led_R, LOW);
    digitalWrite (led_G, LOW);
    digitalWrite (led_B, HIGH);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("0R 0G 1B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:AZUL");
    delay(3000);
  }
  if (valorpot > 254 < 381) //VERDE
  {
    digitalWrite (led_R, LOW);
    digitalWrite (led_G, HIGH);
    digitalWrite (led_B, LOW);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("0R 1G 0B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:VERDE");
    delay(3000);
  }
  if (valorpot > 381 < 538) //CIANO
  {
    digitalWrite (led_R, LOW);
    digitalWrite (led_G, HIGH);
    digitalWrite (led_B, HIGH);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("0R 1G 1B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:CIANO");
    delay(3000);
  }
  if (valorpot > 538 < 635) //VERMELHO
  {
    digitalWrite (led_R, HIGH);
    digitalWrite (led_G, LOW);
    digitalWrite (led_B, LOW);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("1R 0G 0B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:VERMELHO");
    delay(3000);
  }
  if (valorpot > 635 < 762) //MAGENTA
  {
    digitalWrite (led_R, HIGH);
    digitalWrite (led_G, LOW);
    digitalWrite (led_B, HIGH);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("1R 0G 1B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:MAGENTA");
    delay(3000);
  }
  if (valorpot > 762 < 889) //AMARELO
  {
    digitalWrite (led_R, HIGH);
    digitalWrite (led_G, HIGH);
    digitalWrite (led_B, LOW);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("1R 1G 0B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:AMARELO");
    delay(3000);
  }
  if (valorpot  > 889 < 1023) //BRANCO
  {
    digitalWrite (led_R, HIGH);
    digitalWrite (led_G, HIGH);
    digitalWrite (led_B, HIGH);
    lcd.begin(16,2);
lcd.clear();
    lcd.setCursor(3, 0);
    lcd.print("1R 1G 1B");
    lcd.setCursor(4, 1);
    lcd.print ("COR:BRANCO");
    delay(3000);
  }

  Serial.println(valorpot);
  delay(100);
}
