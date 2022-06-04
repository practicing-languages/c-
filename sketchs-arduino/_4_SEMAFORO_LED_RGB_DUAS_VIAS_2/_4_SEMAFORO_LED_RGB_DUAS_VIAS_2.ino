#define verde_ns 11
#define vermelho_ns 10
#define verde_lo 12
#define vermelho_lo 13

void estado_1();
void estado_2();
void estado_3();
void estado_4();
void estado_5();



void setup() {
  pinMode(verde_ns, OUTPUT);
  (vermelho_ns, OUTPUT);
  (verde_lo, OUTPUT);
  (vermelho_lo, OUTPUT);
}

void loop() {
  estado_1();
  estado_2();
  estado_3();
  estado_4();
  estado_5();
  estado_3();
}

void estado_1()
{
  digitalWrite(verde_ns, HIGH);
               digitalWrite(vermelho_ns, LOW);
               digitalWrite(verde_lo, LOW);
               digitalWrite(vermelho_lo, HIGH);
               delay(5000);
}

void estado_2()
{
  digitalWrite(verde_ns, HIGH);
               digitalWrite(vermelho_ns, LOW);
               digitalWrite(verde_lo, HIGH);
               digitalWrite(vermelho_lo, HIGH);
               delay(2000);
}

void estado_3()
{
  digitalWrite(verde_ns, HIGH);
               digitalWrite(vermelho_ns, LOW);
               digitalWrite(verde_lo, HIGH);
               digitalWrite(vermelho_lo, LOW);
               delay(1000);
}

void estado_4()
{
  digitalWrite(verde_ns, LOW);
               digitalWrite(vermelho_ns, HIGH);
               digitalWrite(verde_lo, HIGH);
               digitalWrite(vermelho_lo, LOW);
               delay(5000);
}

void estado_5()
{
  digitalWrite(verde_ns, HIGH);
               digitalWrite(vermelho_ns, HIGH);
               digitalWrite(verde_lo, HIGH);
               digitalWrite(vermelho_lo, LOW);
               delay(2000);
}
