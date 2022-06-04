#define ledVm1  13
#define ledBl1  12
#define ledVd1  11
#define ledVm2  10
#define ledBl2  9
#define ledVd2  8

void modo1();
void modo2();
void modo3();
void modo4();
void modo5();

void setup () {
  for (int i = 8; i <= 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}
void loop () {
  modo1();
  delay(3000);
  modo2();
  delay(1000);
  modo3();
  delay(500);
  modo4();
  delay(3000);
  modo5();
  delay(1000);
  modo3();
  delay(500);
}
void modo1() {
  digitalWrite(ledVm1, LOW);
  digitalWrite(ledBl1, LOW);
  digitalWrite(ledVd1, HIGH);
  digitalWrite(ledVm2, HIGH);
  digitalWrite(ledBl2, LOW);
  digitalWrite(ledVd2, LOW);
}
void modo2() {
  digitalWrite(ledVm1, HIGH);
  digitalWrite(ledBl1, LOW);
  digitalWrite(ledVd1, HIGH);
  digitalWrite(ledVm2, HIGH);
  digitalWrite(ledBl2, LOW);
  digitalWrite(ledVd2, LOW);
}
void modo3() {
  digitalWrite(ledVm1, HIGH);
  digitalWrite(ledBl1, LOW);
  digitalWrite(ledVd1, LOW);
  digitalWrite(ledVm2, HIGH);
  digitalWrite(ledBl2, LOW);
  digitalWrite(ledVd2, LOW);
}
void modo4() {
  digitalWrite(ledVm1, HIGH);
  digitalWrite(ledBl1, LOW);
  digitalWrite(ledVd1, LOW);
  digitalWrite(ledVm2, LOW);
  digitalWrite(ledBl2, LOW);
  digitalWrite(ledVd2, HIGH);
}
void modo5() {
  digitalWrite(ledVm1, HIGH);
  digitalWrite(ledBl1, LOW);
  digitalWrite(ledVd1, LOW);
  digitalWrite(ledVm2, HIGH);
  digitalWrite(ledBl2, LOW);
  digitalWrite(ledVd2, HIGH);
}
