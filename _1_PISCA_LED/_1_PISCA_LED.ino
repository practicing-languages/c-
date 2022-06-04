#define led 13// cria uma especie de variavel para o led 13 
void setup() //funcao para parametrizar o programa 
{
  // put your setup code here, to run once:
pinMode(led,OUTPUT);//configura o led 13 como saida 

}

void loop() //sao os ciclos que o arduino deve executar
{
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);//define o estado alto do led 
delay(6000);//define o tempo em que o led vai ficar ligado 
digitalWrite(led,LOW);//define o estado baixo do led
delay(1000);//define o tempo em que o led vai ficar em nivel baixo
}
