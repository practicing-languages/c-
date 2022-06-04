#include <LiquidCrystal.h>
#define led_R 11
#define led_G 12
#define led_B 13
#define pot A0

int valorpot = 0;
int trocaled = 0;
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
trocaled = valorpot * (7.0/1023.0);
  if (trocaled == 0) //preto
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

  }
  if (trocaled == 1) //AZUL
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
  }
  if ( trocaled == 2) //VERDE
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
  }
  if (trocaled == 3) //CIANO
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
  }
  if (trocaled == 4) //VERMELHO
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
  }
  if (trocaled == 5) //MAGENTA
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
  }
  if (trocaled == 6) //AMARELO
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
  }
  if (trocaled == 7) //BRANCO
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
  }

  Serial.println(valorpot);
}
