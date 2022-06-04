#define LIGAbtn 2//define o pino 2 como botao para ligar o circuito

#define DESLIGAbtn 3//define o pino 3 como botao para desligar o circuito

#define EMERGENCIAbtn 4//define o pino 4 como botao de interromper o funcionamento do circuito

#define GREENled 5//define o pino 5 para o led verde
#define REDled 6// define o pino 6 para o led vermelho
#define YELLOWled 7// define o pino 7 para o led amarelo
#define Motor 8//define o pino 8 para o motor
void setup() {
  pinMode(LIGAbtn, INPUT);// define o botao de ligar como uma entrada 
  pinMode(DESLIGAbtn, INPUT);// define o botao de desligar como uma entrada 
  pinMode(EMERGENCIAbtn, INPUT);
  pinMode(GREENled, OUTPUT);
  pinMode(REDled, OUTPUT);
  pinMode(YELLOWled, OUTPUT);
  pinMode(Motor, OUTPUT);
  digitalWrite(Motor, LOW);
  digitalWrite(GREENled, HIGH);
}

void loop() {

  while (digitalRead(EMERGENCIAbtn) == HIGH) {
    digitalWrite(Motor, LOW);
    digitalWrite(GREENled, LOW);
    digitalWrite(REDled, LOW);
    { digitalWrite(YELLOWled, HIGH);
      delay(500);
      digitalWrite(YELLOWled, LOW);
      delay(500);
    }
  }
  if (digitalRead(DESLIGAbtn) == HIGH) {
    digitalWrite(GREENled, HIGH);
    digitalWrite(REDled, LOW);
    digitalWrite(YELLOWled, LOW);
    digitalWrite(Motor, LOW);
    delay(1000);
  }
  else if (digitalRead(LIGAbtn) == HIGH) {
    digitalWrite(GREENled, LOW);
    digitalWrite(REDled, HIGH);
    digitalWrite(YELLOWled, LOW);
    digitalWrite(Motor, HIGH);

  }
}
