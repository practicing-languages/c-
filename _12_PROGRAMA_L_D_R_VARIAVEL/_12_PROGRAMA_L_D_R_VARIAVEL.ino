#define ldr A0
#define led 3

int vldr = 0;


void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  digitalWrite(led, LOW);
}

void loop() {
  vldr = analogRead(ldr);
  //if(vldr>900)
  //{
  //  digitalWrite(led,LOW);
  //}
  //else
  //{
  //  digitalWrite(led,HIGH);
  //}
  analogWrite(led, vldr);
  Serial.println(vldr);
  delay(100);
}
