#include <SoftwareSerial.h>
SoftwareSerial thanos (6,7); //RX TX

//---Mapeamento de Hardware---//
#define in1  8
#define in2  9
#define en1 10
#define en2 11
#define in3 12
#define in4 13

//---Declaração de variáveis---//
int  flash =0;
char jarvis=0;

//---Protótipo das funções auxiliares---//
void avanca();
void recua();
void direita();
void esquerda();
void estaciona();
void velocidade();
void leitura();

//---Configurações iniciais---//
void setup() 
{ 
//---Inicializar comunicação serial---//
thanos.begin(9600);
//---Configuração dos pinos---//
  for(int i=8;i<=13;i++)
  {
  pinMode(i,OUTPUT);
  digitalWrite(i,LOW);  
  }
}

//---Lógica de funcionamento---//
void loop() 
{
 leitura(); 
}

//---Funções auxiliares---//
//No smartphone inclua um botão para ir para frente
void avanca()
{
  if(jarvis=='F')
  {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW); 
  }
}
//==================================================================
//No smartphone inclua um botão para ir para trás
void recua()
{
  if(jarvis=='B')
  {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH); 
  }
}
//==================================================================
//No smartphone inclua um botão para virar a direita
void direita()
{
  if(jarvis=='R')
  {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW); 
  }
}
//==================================================================
//No smartphone inclua um botão para virar a esquerda
void esquerda()
{
  if(jarvis=='L')
  {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH); 
  }
}
//==================================================================
//No smartphone inclua um botão para estacionar
void estaciona()
{
  if(jarvis=='S')
  {
   digitalWrite(in1,LOW);
   digitalWrite(in2,LOW);
   digitalWrite(in3,LOW);
   digitalWrite(in4,LOW); 
  }
}
//==================================================================
//No smartphone inclua um slider para a velocidade
void velocidade()
{
 if(jarvis=='V')flash=thanos.parseInt();
 analogWrite(en1,flash);
 analogWrite(en2,flash); 
}
//==================================================================
void leitura()
{
 if(thanos.available())
 {
  jarvis=thanos.read();
  velocidade();
  estaciona();
  esquerda(); 
  direita();
  recua();
  avanca();
 }
}
//==================================================================
