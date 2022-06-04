//---Mapeamento de Hardware---//
#define pot     A0
#define giro     3
#define direcao  2
#define in1     10
#define in2     11
#define in3     12
#define in4     13

//---Declaração de variáveis---//
int tempo=0;
bool flag=0,flag1=0,flag2=0;
short sentido=0,revolucao=0;

//---Protótipo das Funções Auxiliares---//
void horario();
void antihorario();
void leituraDasEntradas();
void acionamento();
//---Configurações Iniciais---//
void setup() 
{
  pinMode(direcao,INPUT);
  pinMode(giro,INPUT);
  pinMode(pot,INPUT);
  for(int i =10;i<=13;i++)
  {
  pinMode(i,OUTPUT);
  digitalWrite(i,LOW);    
  }
}

void loop() 
{
leituraDasEntradas();
acionamento(); 
}

void horario()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,HIGH);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,HIGH);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(tempo);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(tempo); 
}

void antihorario()
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,HIGH);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,HIGH);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(tempo);
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
delay(tempo); 
}

void leituraDasEntradas()
{
tempo=analogRead(pot);
tempo=map(tempo,0,1023,10,100);
  if((digitalRead(direcao)==LOW)&&(flag==0))
  {
  sentido++;
  flag=1;
    if(sentido>1)
    {
    sentido=0;
    }
  }
    if((digitalRead(direcao)==HIGH)&&(flag==1))
    {
    flag=0;  
    }

      if((digitalRead(giro)==LOW)&&(flag1==0))
      {
      revolucao=1;
      flag1=1;
      flag2=0;
      }
        if((digitalRead(giro)==HIGH)&&(flag1==1))
        {
        flag1=0;  
        }
}

void acionamento()
{
 if((sentido==0)&&(revolucao==1)&&(flag2==0))
 {
   for(int i=0;i<512;i++)
   {
   horario();
   }
 flag2=1; 
 revolucao=0;  
 }
   if((sentido==1)&&(revolucao==1)&&(flag2==0))
   {
     for(int i=0;i<512;i++)
     {
     antihorario();
     }
   flag2=1;
   revolucao=0;   
   }
}
