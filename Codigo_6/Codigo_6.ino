#define led 13
#define btn 4
void setup() {
    pinMode(led,OUTPUT);
    pinMode(btn,INPUT);
    digitalWrite(led,LOW);
}
void loop() {
    if(digitalRead(btn)==0)
    {
        digitalWrite(led,HIGH);
    }
}
