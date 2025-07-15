/* BUCLES

*/

/*---------------------------------------------------*/

void setup() {
  Serial.begin(115200);
  delay(500);

// Bucles CONTROLADO POR UN CONTADOR

/* for(int i = 0; i <=10; i ++) {
    Serial.println("Número: " + String(i));
}  */

/* for(int i = 0; i<100; i +=2){
    Serial.println("Número: " + String(i));
}  */

/* for(int i = 100; i >= 0; i--){
  Serial.println("Número: " + String(i));
}  */
 
// Bucles en dos dimensiones (bucles anidados)

String salida = "";
for(int fila = 0; fila<10; fila++){
  for(int col = 0; col<10; col++){
    // Serial.print(String(fila) + ":" + String(col) + "\t"); // "\t" --> tabulador
    salida += String(fila) + ":" + String(col) + "\t";
    }
    }
      // Serial.print("\n");  // "\n" --> salto de página
      salida += "\n";
}


/*---------------------------------------------------*/

void loop() {
  
}

/*---------------------------------------------------*/
