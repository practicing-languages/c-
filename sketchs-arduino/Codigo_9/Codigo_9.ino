#define led 13
#define btn 12
void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  digitalWrite(led, OUTPUT);
}
void loop() {
  if (digitalRead(btn) == 0)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }

}
