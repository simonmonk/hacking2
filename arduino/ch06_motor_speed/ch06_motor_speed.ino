const int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Set speed 0..255");
}

void loop() {
  if (Serial.available()) {
    int speed = Serial.parseInt();
    analogWrite(motorPin, speed);
  }
}
