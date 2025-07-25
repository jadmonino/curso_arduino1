#include <ESP32Servo.h>

#define PINSERVO 15

String entrada = "";
String secreto = "1234";
bool primeraVez = true;

Servo miServo; // Declaramos una variable de tipo servo



//--------------------------------------------------------------------------
void setup() {
  Serial.begin(115200);
  miServo.setPeriodHertz(50);
  miServo.attach(PINSERVO, 500, 2500);
  miServo.write(0); // posicion inicial conocida 0


}
//--------------------------------------------------------------------------

void loop() {
 if(primeraVez){
  Serial.println("Introduzca la clave: ");
  primeraVez = false;
 }
 //limpiar();
 if(Serial.available() > 0){
  entrada = Serial.readStringUntil('\n');
  entrada.trim();
  if (entrada == secreto){
  Serial.println("Clave correcta ");
  miServo.write(90);
  delay(5000);
  Serial.println("Puerta cerrada ");
  miServo.write(0);
  }
  else(
    Serial.println("Clave incorrecta. Pruebe otra vez")
  );
  }

 Serial.println("Introduzca la clave: ");
}
//--------------------------------------------------------------------------

/*void limpiar(){
  Serial.write(27);
  Serial.print("[2J");
  Serial.write(27);
  Serial.print("[H");
}*/