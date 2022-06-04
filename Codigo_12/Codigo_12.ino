#define led 5
#define btn 4
void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  digitalWrite(led, LOW);
}
void loop() {
  if (digitalRead(btn) == 0);
  {
    for (int i = 0; i < 255; i++)
    {
      analogWrite(led, i);
    }
    for (int i = 255; i > 0; i--)
    {
      analogWrite(led, i);
    }
  }
}
