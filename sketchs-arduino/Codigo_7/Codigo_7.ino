#define led 13
#define btn 7
void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  digitalWrite(led, LOW);
}
void loop() 
{
  while (digitalRead(btn) == LOW)
  {
    digitalWrite(led, HIGH);
  }
  digitalWrite(led, LOW);
}
