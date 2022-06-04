#define btn 2
#define led 3
void fvled();
int vled = 0;
void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  attachInterrupt(digitalPinToInterrupt(btn), fvbtn, LOW);
  void loop() {
    digitalWrite(led, vled);
  }
  void fvled() {
    vled = !vled;
  }
