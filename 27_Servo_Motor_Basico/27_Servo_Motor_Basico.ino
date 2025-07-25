#include <ESP32Servo.h>

#define PINSERVO 15

Servo miServo; // Declaramos una variable de tipo servo


//--------------------------------------------------------------------------
void setup() {
  miServo.setPeriodHertz(50);
  miServo.attach(PINSERVO, 500, 2500);

}
//--------------------------------------------------------------------------
void loop() {
/*  for(int i = 0; i < 180; i++){
    miServo.write(i);
    delay(20);
  }
  delay(200);

  for (int i = 180; i>0; i++) {
  miServo.write(i);
  }
 delay(50); */ 
for(int i = 0; i<=180; i+=45){
    miServo.write(i);
    delay(2000);
  }
  delay(500);

  for (int i = 180; i>=0; i-=45) {
  miServo.write(i);
  delay(2000);
  }
 delay(500);
 
}
//--------------------------------------------------------------------------