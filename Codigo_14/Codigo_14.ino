#define led1 13
#define led2 12
#define led3 11

long timer1 =

void setup () {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}
void loop() {
  if (millis > timer1)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    timer1 = millis;
  }
  else
  {
    digitalWrite(led1, LOW);
  }
}
