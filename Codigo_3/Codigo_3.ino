#define led1 11
#define led2 12
#define led3 13

void setup () {
  for (int i = 11; i <= 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}
void loop () {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
}
