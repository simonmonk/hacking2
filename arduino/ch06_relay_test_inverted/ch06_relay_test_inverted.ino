const int relayPin = A0;

void setup()
{
  pinMode(relayPin, OUTPUT);
}

void loop()
{
  // relay on
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
  delay(2000);
  // relay off
  pinMode(relayPin, INPUT);
  delay(2000);
}
