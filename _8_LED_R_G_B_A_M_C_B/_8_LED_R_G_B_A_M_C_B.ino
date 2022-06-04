#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7
#define maximo 7

int btnclicado, btnliberado, ciclo;
void verificabtn();
void vermelho();
void verde();
void azul();
void amarelo();
void magenta();
void ciano();
void branco();
void trocaled();

void setup() 
{
pinMode (botao, INPUT);
pinMode (ledR, OUTPUT);
pinMode (ledB, OUTPUT);
pinMode (ledG, OUTPUT);
}

void loop() 
{
verificabtn();
}

void vermelho()
{
digitalWrite(ledR, HIGH);
digitalWrite(ledB, LOW);
digitalWrite(ledG, LOW);
}

void verde()
{
digitalWrite(ledG, HIGH);
digitalWrite(ledB, LOW);
digitalWrite(ledR, LOW);
}

void azul()
{
digitalWrite(ledB, HIGH);
digitalWrite(ledG, LOW);
digitalWrite(ledR, LOW);
}

void amarelo()
{
digitalWrite(ledR, HIGH);
digitalWrite(ledB, LOW);
digitalWrite(ledG, HIGH);
}

void magenta()
{
digitalWrite(ledR, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledG, LOW);
}

void ciano()
{
digitalWrite(ledR, LOW);
digitalWrite(ledB, HIGH);
digitalWrite(ledG, HIGH);
}

void branco()
{
digitalWrite(ledR, HIGH);
digitalWrite(ledB, HIGH);
digitalWrite(ledG, HIGH);
}

void verificabtn()
{
  if (digitalRead(botao) == HIGH)
  {
    btnclicado = 1;
    btnliberado = 0;
  }

  else
    btnliberado = 1;
  if ((btnclicado == 1) and (btnliberado == 1))
  {
    btnclicado = 0;
    btnliberado = 0;
    trocaled();
  }
}
  void trocaled()
  {
    if (ciclo == 0)
    {
      vermelho();
    }

    else if (ciclo == 1)
    {
      verde();

    }
    else if (ciclo == 2)
    {
      azul();
    }
    else if (ciclo == 3)
    {
      amarelo();
    }
    else if (ciclo == 4)
    {
      magenta();
    }
    else if (ciclo == 5)
    {
      ciano();
    }
    else if (ciclo == 6)
    {
      branco();
    }
    
    ciclo++;
    if (ciclo > maximo)
    {
      ciclo = 0;
    }
  }
