int pirPin = 2;
int ledPin = 13;
int buzzer = 8;

void setup()
{
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int motion = digitalRead(pirPin);

  if (motion == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzer, HIGH);

    delay(10000);

    digitalWrite(ledPin, LOW);
    digitalWrite(buzzer, LOW);


    delay(10000);
  }
}
