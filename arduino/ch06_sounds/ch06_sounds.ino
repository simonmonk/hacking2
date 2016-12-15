const int sw1pin = 6;
const int sw2pin = 7;
const int soundPin = 8;

void setup() {
  pinMode(sw1pin, INPUT_PULLUP);
  pinMode(sw2pin, INPUT_PULLUP);
  pinMode(soundPin, OUTPUT);
}

void loop() {
  if (! digitalRead(sw1pin)) {
    tone(soundPin, 220);
  }
  else if (! digitalRead(sw2pin)) {
    tone(soundPin, 300);
  }
  else {
    noTone(soundPin);
  }
}
