#include <LiquidCrystal.h>// declara a biblioteca do display
#define led_R 11//declara o pino 11 como led red
#define led_G 12//declara o pino 12 como led green
#define led_B 13//declara o pino 13 como led blue
#define pot A0////declara o pino analogico A0 como potenciometro

int valorpot = 0;//criou uma variavel para valor do potenciometro
int trocaled = 0;//criou uma variavel para trocar a cor do led de acordo com a leitura analogica
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);//define os pinos onde está o display 16x2

void setup ()// inicialização do programa 
{
  pinMode(led_R, OUTPUT);//define led red como saida 
  pinMode(led_G, OUTPUT);//define led green como saida
  pinMode(led_B, OUTPUT);//define  led blue como saida
  pinMode(pot, INPUT);//define potenciometro como entrada 
  digitalWrite(led_R, LOW);// led red inicia em nivel logico baixo
  digitalWrite(led_G, LOW);// led green inicia em nivel logico baixo
  digitalWrite(led_B, LOW);// led blue inicia em nivel logico baixo
  Serial.begin(9600);//é compatibilidade da leitura do petenciometro
  lcd.begin(16, 2);//inicia o display
  lcd.clear();//limpa o display
}
void loop()//é o ciclo que o arduino vai executar  
{
  valorpot = analogRead(pot);// valor do potenciometro é igual a leitura analogica
trocaled = valorpot * (7.0/1023.0);//o led vai trocar a cor de acordo com a regra aplicada 
  if (trocaled == 0) //preto se o valor do potenciometro for o definido o led vai ficar apagado
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
  if (trocaled == 1) //AZUL se o valor do potenciometro for o definido o led vai ficar azul
  {
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
  if ( trocaled == 2) //VERDE se o valor do potenciometro for o definido o led vai ficar verde
  {
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
  if (trocaled == 3) //CIANO se o valor do potenciometro for o definido o led vai ficar ciano
  {
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
  if (trocaled == 4) //VERMELHO se o valor do potenciometro for o definido o led vai ficar vermelho
  {
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
  if (trocaled == 5) //MAGENTA se o valor do potenciometro for o definido o led vai ficar magenta
  {
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
  if (trocaled == 6) //AMARELO se o valor do potenciometro for o definido o led vai ficar amarelo
  {
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
  if (trocaled == 7) //BRANCO se o valor do potenciometro for o definido o led vai ficar branco
  {
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

  Serial.println(valorpot);// vai imprimir na tela a leitura analogica do potenciometro
}
