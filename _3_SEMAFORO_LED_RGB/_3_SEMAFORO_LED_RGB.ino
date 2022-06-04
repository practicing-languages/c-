#define vermelho 10
#define verde 11

void L_vermelho();
void L_amarelo();
void L_verde();


void setup() {
pinMode(vermelho,OUTPUT);
pinMode(verde,OUTPUT);

digitalWrite(vermelho,LOW);
digitalWrite(verde,LOW);
}

void loop() {
L_verde(); 
L_amarelo();
L_vermelho();
}

void L_vermelho()
{
digitalWrite(vermelho,HIGH);
digitalWrite(verde,LOW);
delay(7000);
}
void L_amarelo()
{
digitalWrite(vermelho,HIGH);
digitalWrite(verde,HIGH);
delay(2000);
}
void L_verde()
{
digitalWrite(vermelho,LOW);
digitalWrite(verde,HIGH);
delay(9000);
}
