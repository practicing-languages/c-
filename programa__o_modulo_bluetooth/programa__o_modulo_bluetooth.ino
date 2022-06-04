#include <SoftwareSerial.h>

SoftwareSerial batman(6,7);//Rx Tx

#define red 9
#define green 10
#define blue 11

int red_value = 0;
int green_value = 0;
int blue_value = 0;
char hulk_bluetooth;

void setup()
{
  for(int i=9; i<=11; i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
  batman.begin(9600);
  }
}

void loop()
{
  if(batman.available())
  {
    hulk_bluetooth= batmanread();

    if(hulk_bluetooth=='r') red_value=batman.parseint();
    if(hulk_bluetooth=='r') green_value=batman.parseint();
    if(hulk_bluetooth=='r') Blue_value=batman.parseint();  
  }
  analogWrite(red,red_value);
  analogWrite(green,green_value);
  analogWrite(blue,blue_value);
  delay(10);
}
