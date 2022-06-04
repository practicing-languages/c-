#include <LiquidCrystal.h>
#define led_R 11
#define led_G 12
#define led_B 13
#define pot A0

int valorpot=0;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup ()
{
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  pinMode(pot, INPUT);
  digitalWrite(led_R,LOW);
  digitalWrite(led_G,LOW); 
  digitalWrite(led_B,LOW);
Serial.begin(9600);
}
void loop() {
 valorpot = analogRead(pot);

  if (valorpot >0 <127)//preto
  {
    digitalWrite (led_R,LOW);
    digitalWrite (led_G,LOW);
   digitalWrite (led_B,LOW);
     

  }
if (valorpot >127 < 254)//AZUL
  {
    digitalWrite (led_R,LOW);
    digitalWrite (led_G,LOW);
    digitalWrite (led_B,HIGH);
    
  }
 if (valorpot >254 <381)//VERDE
 {
   digitalWrite (led_R,LOW);
    digitalWrite (led_G,HIGH);
    digitalWrite (led_B,LOW);
    
  }
if (valorpot >381 <538)//CIANO
  {
    digitalWrite (led_R,LOW);
    digitalWrite (led_G,HIGH);
    digitalWrite (led_B,HIGH);
    
  }
if (valorpot >538 <635)//VERMELHO
  {
    digitalWrite (led_R,HIGH);
    digitalWrite (led_G,LOW);
    digitalWrite (led_B,LOW);
    
  }
if (valorpot >635 <762)//MAGENTA
  {
   digitalWrite (led_R,HIGH);
    digitalWrite (led_G,LOW);
    digitalWrite (led_B,HIGH);
    
  }
if (valorpot >762 <889)//AMARELO
  {
    digitalWrite (led_R,HIGH);
    digitalWrite (led_G,HIGH);
    digitalWrite (led_B,LOW);
    
  }
if (valorpot  >889 <1023)//BRANCO
 {
    digitalWrite (led_R,HIGH);
  digitalWrite (led_G,HIGH);
  digitalWrite (led_B,HIGH);
    
  }
  
  Serial.println(valorpot);
  delay(100);
}
