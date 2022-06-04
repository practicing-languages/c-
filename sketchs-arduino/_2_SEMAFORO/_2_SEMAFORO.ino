#define led_vermelho 13
#define led_amarelo 12
#define led_verde 11
void setup()
{
pinMode(led_vermelho,OUTPUT);
pinMode(led_amarelo,OUTPUT);
pinMode(led_verde,OUTPUT);
}

void loop() 
{
digitalWrite(led_vermelho,HIGH);//define o estado alto do led
digitalWrite(led_amarelo,LOW);//define o estado baixo do led
digitalWrite(led_verde,LOW);//define o estado baixo do led
delay(5000);//define o tempo em que o led vai ficar ligado 
digitalWrite(led_vermelho,LOW);//define o estado alto do led
digitalWrite(led_amarelo,HIGH);//define o estado baixo do led
digitalWrite(led_verde,LOW);//define o estado baixo do led
delay(2000);//define o tempo em que o led vai ficar ligado
digitalWrite(led_vermelho,LOW);//define o estado alto do led
digitalWrite(led_amarelo,LOW);//define o estado baixo do led
digitalWrite(led_verde,HIGH);//define o estado baixo do led
delay(7000);//define o tempo em que o led vai ficar ligado  
}
