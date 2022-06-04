#define led 3
#define maximo 255
#define minimo 0
#define tpm 5


void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (int i = minimo; i < maximo; i++)
  {
    analogWrite(led, i);
    delay(tpm);
  }
  delay(1000);
  for (int i = maximo; i > minimo; i--)
  {
    analogWrite(led, i);
    delay(tpm);
  }
  delay(1000);
}
