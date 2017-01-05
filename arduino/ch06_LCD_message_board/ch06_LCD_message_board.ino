
#include <LiquidCrystal.h>

// LiquidCrystal display with:
// rs on pin 8
// rw on pin 11
// enable on pin 9
// d4-7 on pins 4-7
LiquidCrystal lcd(8, 11, 9, 4, 5, 6, 7);


void setup() {
  Serial.begin(9600);
  lcd.begin(2, 16);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hacking");
  lcd.setCursor(0,1);
  lcd.print("Electronics");
}



void loop() {
  if (Serial.available()) {
    char ch = Serial.read();
    if (ch == '#') {
      lcd.clear();
    }
    else if (ch == '/') {
      lcd.setCursor(0,1);
    }
    else {
      lcd.write(ch);
    }
  }
}


