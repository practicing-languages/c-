#define Lbtn 2
#define Dbtn 3
#define Ebtn 4
#define Gled 5
#define Rled 6
#define Yled 7
#define Motor 8
void setup() {
  pinMode(Lbtn, INPUT);
  pinMode(Dbtn, INPUT);
  pinMode(Ebtn, INPUT);
  pinMode(Gled, OUTPUT);
  pinMode(Rled, OUTPUT);
  pinMode(Yled, OUTPUT);
  pinMode(Motor, OUTPUT);
  digitalWrite(Motor, LOW);
  digitalWrite(Gled, HIGH);
}

void loop() {

  while (digitalRead(Ebtn) == HIGH) {
    digitalWrite(Motor, LOW);
    digitalWrite(Gled, LOW);
    digitalWrite(Rled, LOW);
    { digitalWrite(Yled, HIGH);
      delay(500);
      digitalWrite(Yled, LOW);
      delay(500);
    }
  }
  if (digitalRead(Dbtn) == HIGH) {
    digitalWrite(Gled, HIGH);
    digitalWrite(Rled, LOW);
    digitalWrite(Yled, LOW);
    digitalWrite(Motor, LOW);
    delay(1000);
  }
  else if (digitalRead(Lbtn) == HIGH) {
    digitalWrite(Gled, LOW);
    digitalWrite(Rled, HIGH);
    digitalWrite(Yled, LOW);
    digitalWrite(Motor, HIGH);

  }
}
