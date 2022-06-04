#define A 2
#define B 3
#define R 4

boolean iA = 0;
boolean iB = 0;
boolean oR = 0;
int S = 0;
void setup() {
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(R, INPUT);
  digitalWrite(R, LOW);
}

void loop() {
  iA = digitalRead(A);
  iB = digitalRead(B);
  oR = iA && iB; //AND
  //oR = iA || iB; //OR
  //oR = !(iA && iB); //NAND
  //oR = !(iA || iB); //NOR
  //oR = iA ^ iB; //XOR
  //oR = !(iA ^ iB); //XNOR
  digitalWrite(R, oR);
}
