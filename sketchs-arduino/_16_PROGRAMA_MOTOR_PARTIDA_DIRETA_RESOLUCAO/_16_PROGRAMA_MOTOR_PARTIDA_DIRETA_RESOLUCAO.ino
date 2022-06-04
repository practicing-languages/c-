#define EM 3
#define STOP 4
#define START 5
#define amarelo 6 
#define verde 7 
#define vermelho 8
#define motor 9

short i=0;

void setup()
{
  pinMode(EM,INPUT);
  pinMode(STOP,INPUT);
  pinMode(START,INPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(motor,OUTPUT);
  digitalWrite(amarelo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(vermelho,LOW);
  digitalWrite(motor,LOW);
}
void loop()
{
  if(digitalRead(EM)==HIGH)
  {
    i=1;
    digitalWrite(amarelo,HIGH);
    digitalWrite(verde,LOW);
    digitalWrite(vermelho,LOW);
    digitalWrite(motor,LOW);
    delay(300);
    digitalWrite(amarelo,HIGH);
    delay(300);
  }
  
else
if((digitalRead(STOP)==HIGH)&&(digitalRead(EM)==LOW))
  {
  digitalWrite(amarelo,LOW);
  digitalWrite(verde,HIGH);
  digitalWrite(vermelho,LOW);
  digitalWrite(motor,LOW);
  }
else
if((digitalRead(EM)==LOW)&&(digitalRead(STOP)==LOW)&&(digitalRead(START)==1))
{
  digitalWrite(amarelo,LOW);
  digitalWrite(verde,LOW);
  digitalWrite(vermelho,HIGH);
  digitalWrite(motor,HIGH);
}
if((digitalRead(EM)==LOW)&&(digitalRead(STOP)==LOW)&&(digitalRead(START)==LOW)&&(i==1))
{
  digitalWrite(amarelo,LOW);
  digitalWrite(verde,HIGH);
  digitalWrite(vermelho,LOW);
  digitalWrite(motor,LOW);
  i=0;
}
}
