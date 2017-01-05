// Arduino Leonardo Only

char* password = "mysecretpassword\n";

const int buttonPin = 2; 

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  if (! digitalRead(buttonPin)) {
    Keyboard.print(password);
    delay(2000);
  }
}
