#define alcool 12
#define detergente 11
#define soda 10 
#define oleo 9 
#define saida 8
#define motor 7

void setup ()
{
  pinMode(alcool, OUTPUT);
  pinMode(detergente, OUTPUT);
  pinMode(soda,OUTPUT);
  pinMode(saida, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(oleo, OUTPUT);
   digitalWrite(alcool, LOW);
   digitalWrite(detergente, LOW);
   digitalWrite(soda, LOW);
   digitalWrite(saida, LOW);
   digitalWrite(motor, LOW);
   digitalWrite(oleo, LOW);
}

void loop()
{
   digitalWrite(alcool, HIGH);
   digitalWrite(detergente, LOW);
   digitalWrite(soda, LOW);
   digitalWrite(saida, LOW);
   digitalWrite(motor, LOW);
   digitalWrite(oleo, LOW);
   delay(1000);

    digitalWrite(alcool, LOW);
   digitalWrite(detergente, HIGH);
   digitalWrite(soda, LOW);
   digitalWrite(saida, LOW);
   digitalWrite(motor, LOW);
   digitalWrite(oleo, LOW);
   delay(1000);

    digitalWrite(alcool, LOW);
   digitalWrite(detergente, LOW);
   digitalWrite(soda, HIGH);
   digitalWrite(saida, LOW);
   digitalWrite(motor, LOW);
   digitalWrite(oleo, LOW);
   delay(1000);

    digitalWrite(alcool, LOW);
   digitalWrite(detergente, LOW);
   digitalWrite(soda, LOW);
   digitalWrite(saida, HIGH);
   digitalWrite(motor, LOW);
   digitalWrite(oleo, LOW);
   delay(1000);

    digitalWrite(alcool, LOW);
   digitalWrite(detergente, LOW);
   digitalWrite(soda, LOW);
   digitalWrite(saida, LOW);
   digitalWrite(motor, HIGH);
   digitalWrite(oleo, LOW);
   delay(1000);

    digitalWrite(alcool, LOW);
   digitalWrite(detergente, LOW);
   digitalWrite(soda, LOW);
   digitalWrite(saida, LOW);
   digitalWrite(motor, LOW);
   digitalWrite(oleo, HIGH);
   delay(1000);
   
}
