#define vermelho 10
#define verde 11 
#define vermelho_2 9 
#define verde_2 8

void L_vermelho();
void L_amarelo();
void L_verde();
void L_vermelho_2();
void L_amarelo_2();
void L_verde_2();


void setup() {
 pinMode(vermelho,OUTPUT);
 pinMode(verde,OUTPUT);
 pinMode(vermelho_2,OUTPUT);
 pinMode(verde_2,OUTPUT);

digitalWrite(vermelho,LOW);
digitalWrite(verde,LOW);
digitalWrite(vermelho_2,LOW);
digitalWrite(verde_2,LOW);
 

}

void loop() {
  
L_verde();
L_amarelo();
L_vermelho();

}

void L_vermelho()
{
digitalWrite (vermelho,HIGH);
digitalWrite (verde,LOW);
delay(7000);
}
void L_amarelo()
{
digitalWrite (vermelho,HIGH);
digitalWrite (verde,HIGH);
delay(2000);
}
void L_verde()
{
digitalWrite (vermelho,LOW);
digitalWrite (verde,HIGH);
delay(9000);
}
void vermelho()
{
digitalWrite (vermelho_2,HIGH);
digitalWrite (verde,LOW);
delay(7000);
}
void amarelo()
{
digitalWrite (vermelho_2,HIGH);
digitalWrite (verde,HIGH);
delay(2000);
}
void verde()
{
digitalWrite (vermelho_2,HIGH);
digitalWrite (verde,HIGH);
delay(9000);
}
