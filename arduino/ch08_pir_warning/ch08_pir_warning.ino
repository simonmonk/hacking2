const int pirPin = 7;

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pirPin)) {
    int totalSeconds = millis() / 1000;
    int seconds = totalSeconds % 60;
    int mins = totalSeconds / 60;
    Serial.print(mins);
    Serial.print(":");
    if (seconds < 10) Serial.print("0");
    Serial.print(seconds);
    Serial.println("\tMOVEMENT DETECTED");
    delay(10000);
  }
}
  
