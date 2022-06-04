#define ledVm 5
#define ledVd 6

void setup () {
  for (int i = 7; i <= 17; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(ledVm, OUTPUT);
  pinMode(ledVd, OUTPUT);
}
void loop () {
  for (int i = 0; i < 255; i++) {
    analogWrite(ledVd, i);
    analogWrite(ledVm, !i);
    delay(10);
  }
  for (int i = 255; i > 0; i--) {
    analogWrite(ledVd, i);
    analogWrite(ledVm, !i);
    delay(10);
  }
  for (int a = 7; a <= 17; a++)
  {
    digitalWrite(a, HIGH);
    delay(100);
    digitalWrite(a, LOW);
    if (a == 17) {
      a = 0;
    }
  }
}
