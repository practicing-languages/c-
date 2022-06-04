#define motor 3
int tmp = 300;
void setup()
{
  pinMode(motor, OUTPUT);
}

void loop()
{
  int pwm = 0;
  for (pwm = 0; pwm < 256; pwm++)
  {
    analogWrite(motor, pwm);
    delay(tmp);
  }

  for (pwm = 255; pwm >= 0; pwm--)
  {
    analogWrite(motor, pwm);
    delay(tmp);
  }
}
