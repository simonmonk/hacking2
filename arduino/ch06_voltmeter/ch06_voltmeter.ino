const int voltsInPin = A3;

void setup() {
  Serial.begin(9600);
  Serial.println("Voltmeter");
}

void loop() {
  int rawReading = analogRead(voltsInPin);
  float volts = rawReading / 204.6; 
  Serial.println(volts);
  delay(200);
}
