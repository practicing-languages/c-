#define ledPin 13 
bool Ledestado=0;
long MillisAnterior=0;
long intervalo=1000;

 void setup()
 {
  pinMode(ledPin,OUTPUT);
  
 }
 void loop()
 {
  long MillisAtual= millis();
  if(MillisAtual-MillisAnterior>intervalo)
  {
    MillisAnterior=MillisAtual;
  
  
  if(Ledestado==0)
  {
    Ledestado=1;
  }
  else
  Ledestado=0;
  digitalWrite(ledPin,Ledestado);
 
  }
 }
