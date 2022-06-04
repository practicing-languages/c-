#define led 5

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}
void loop() {
  for (int i = 0; i < 255; i++)
  {
    analogWrite(led, i);
  }
  for (int i = 255; i > 0; i--)
  {
    analogWrite(led, i);
  }

}
