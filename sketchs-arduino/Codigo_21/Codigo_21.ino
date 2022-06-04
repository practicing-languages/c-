#include <SoftwareSerial.h>

SoftwareSerial bluetooth(14, 15); // RX, TX do Arduino
String command = "";
char b1;
int c = 0;
void setup()
{
  Serial.begin(9600);
  Serial.println("Pronto para receber comandos.");
  bluetooth.begin(9600);
  pinMode(2, OUTPUT);
}
void loop()
{


  // Lê os dados do bluetooth
  if (bluetooth.available() > 0) { // Se existem dados para leitura
    c = bluetooth.read();
    b1 = bluetooth.read(); //Variável para armazenar o dado atual
    command += b1; //Variável para armazenar todos os dados
    Serial.println(c);
    delay(100);
    if (c == 1) {
      digitalWrite(2, HIGH);
    }
    delay(100);
    if (b1 == '\n') { //Se o dado atual for um pulador de linha (\n)
      Serial.print(command); //Printa o comando
      command = ""; //Limpa o comando para futuras leituras
    }
  }
}