const int voltsInPin = A3;
const int ledPin = 9;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int rawReading = analogRead(voltsInPin);
  int brightness = rawReading / 4;
  analogWrite(ledPin, brightness);
}
