/*
PROGRAMACION ESRUCTURADA
------------------------
Secuencia.

Alternativa.: 

Repetición

*/
 //-----------------------------------------------

int edad = 12;

int nota = 5;

// -----------------------------------------------
void setup() {
  // operando operador operando
  // OR -> ||
  // AND -> &&
  // not -> !
  // edad < 18 ||
  //

  Serial.begin(115200);
  delay(500);

  if(nota < 5){
    Serial.println("SUSPENSO");
  }
    else{
      if(nota < 7){
      Serial.println("APROBADO");
    }
      else{
        if(nota < 9){
          Serial.println("NOTABLE");
        }
        else{
          Serial.println("SOBRESALIENTE");
        }
      }
    }
}



// -------------------------------------------------
void loop() {
  /*if(Serial.available() > 0)
{
  /*
    edad = Serial.read();
}

  if(edad >= 18){
    // Si se cumple
    Serial.println("La persona es mayor de edad");

}
else {
  // Si no se cumple
  Serial.println("La persona es menor de edad");
  delay(1000);
}
*/
}
