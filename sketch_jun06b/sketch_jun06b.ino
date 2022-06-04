#define ledum 11
#define leddois 12
#define ledtres 13

bool Ledestado = 0;
long MillisAnterior1 = 0;
long intervaloum = 500;

bool Ledestadodois = 0;
long MillisAnterior2 = 0;
long intervalodois = 3000;

bool Ledestadotres = 0;
long MillisAnterior3 = 0;
long intervalotres = 5000;

void setup()
{
  pinMode(ledum, OUTPUT);
  pinMode(leddois, OUTPUT);
  pinMode(ledtres, OUTPUT);
}
void loop()
{
  long MillisAtual1 = millis();
  if (MillisAtual1 - MillisAnterior1 > intervaloum)
  {
    MillisAnterior1 = MillisAtual1;


    if (Ledestado == 0)
    {
      Ledestado = 1;
    }
    else
      Ledestado = 0;
    digitalWrite(ledum, Ledestado);

  }
 long MillisAtual2 = millis();
  if (MillisAtual2 - MillisAnterior2 > intervalodois)
  {
    MillisAnterior2 = MillisAtual2;


    if (Ledestadodois == 0)
    {
      Ledestadodois = 1;
    }
    else
      Ledestadodois = 0;
    digitalWrite(leddois, Ledestadodois);

  }
  long MillisAtual3 = millis();
  if (MillisAtual3 - MillisAnterior3 > intervalotres)
  {
    MillisAnterior3 = MillisAtual3;


    if (Ledestadotres == 0)
    {
      Ledestadotres = 1;
    }
    else
      Ledestadotres = 0;
    digitalWrite(ledtres, Ledestadotres);

  }
}
