#include <Servo.h> 

const int servoControlPin = 2;  

Servo servo;      

void setup() {            
  servo.attach(servoControlPin);   
  Serial.begin(9600);      
  Serial.println("Angle in degrees (0 to 180)");
}

void loop() {  
  if (Serial.available()) {
    int angle = Serial.parseInt();
    servo.write(angle);     
  }
}
