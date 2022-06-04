#define A 6 
#define B 7
#define S 10
int estado_entrada_A=0;
int estado_entrada_B=0;
int estado_saida=0;

void setup() {
 pinMode(A,INPUT);
 pinMode(B,INPUT); 
 pinMode(S,OUTPUT);
 digitalWrite(S,LOW);
 
}

void loop() {
estado_entrada_A=digitalRead(A);
estado_entrada_B=digitalRead(B);


//estado_saida=estado_entrada_A&&estado_entrada_B;//AND
//estado_saida=estado_entrada_A||estado_entrada_B;//OR
//estado_saida=!(estado_entrada_A&&estado_entrada_B);//NAND
//estado_saida=!(estado_entrada_A||estado_entrada_B);//NOR
//estado_saida=estado_entrada_A^estado_entrada_B;//XOR
//estado_saida=!(estado_entrada_A^estado_entrada_B);//XNOR
//estado_saida=!estado_entrada_A;//NOT
digitalWrite(S,estado_saida);

}
