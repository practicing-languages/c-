#define led 13
#define btn 12
void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  digitalWrite(led, LOW);
}
void loop() {
  do
  {
    digitalWrite(led, HIGH);
  }   while (digitalRead(btn) == 0);
  digitalWrite(led,LOW);
}
