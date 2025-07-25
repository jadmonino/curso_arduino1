#include <ESP32Servo.h>
#include <BluetoothSerial.h>

#define PINSERVO 15
#define PINROJO 13
#define PINVERDE 14

String entrada = "";
String secreto = "1234";
bool primeraVez = true;

Servo miServo; // Declaramos una variable de tipo servo
BluetoothSerial serialBT;



//--------------------------------------------------------------------------
void setup() {
  Serial.begin(115200);
 
  // BLUETOOTH
  serialBT.begin("Caja_Fuerte_JA_");
  
  // SERVO
  miServo.setPeriodHertz(50);
  miServo.attach(PINSERVO, 500, 2500);
  miServo.write(0); // posicion inicial conocida 0
  pinMode(PINROJO, HIGH);
  pinMode(PINVERDE, LOW);


}
//--------------------------------------------------------------------------

void loop() {
 if(primeraVez){
  serialBT.println("Introduzca la clave: ");
  primeraVez = false;
 }
 //limpiar();
 
 if(serialBT.available()){
  entrada = serialBT.readStringUntil('\n');
  entrada.trim();
  if (entrada == secreto){
  serialBT.println("Clave correcta ");
  miServo.write(90);
  // Puerta Abierta
  serialBT.println("Puerta ABIERTA ");
  digitalWrite(PINROJO, LOW);
  digitalWrite(PINVERDE, HIGH);
  delay(5000);

  
  serialBT.println("Puerta CERRADA ");
  digitalWrite(PINROJO, HIGH);
  digitalWrite(PINVERDE, LOW);
  miServo.write(0);
  }
  else(
    serialBT.println("Clave incorrecta. Pruebe otra vez")
  );
  }
   //serialBT.println("Introduzca la clave: ");
}
//--------------------------------------------------------------------------

/*void limpiar(){
  Serial.write(27);
  Serial.print("[2J");
  Serial.write(27);
  Serial.print("[H");
}*/