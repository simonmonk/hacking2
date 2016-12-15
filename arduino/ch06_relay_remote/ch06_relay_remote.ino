const int relayPin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("1=On, 0=Off");
  pinMode(relayPin, OUTPUT);
}

void loop() {
  if (Serial.available()) {
     char ch = Serial.read();
     if (ch == '1') {
       digitalWrite(relayPin, HIGH);
     }
     else if (ch == '0') {
       digitalWrite(relayPin, LOW);
     }
  }
}
