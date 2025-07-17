int r = 0;
String nombre = "pepe";
//alumnos = "pepe", "manolo";

// ARRAYS
/*Los arrays en "C" todos los elementos tienen que ser de la misma tipologia, es decir, son enteros, son cadenas, son decimales, etc....
En "C" hay que reservar memoria para guardar la aplicación creada.
Como se define una ARRAYS, 
*/
int numeros[5]; // una arrays de 5 numeros enteros
int otro[] = {1,2,3,4,5};

//------------------------------------------------
void setup() {
  Serial.begin(115200);
  for(int i = 0; i < 5; i++){
    numeros[i] = otro[i];
  }
 
  for(int j = 0; j < 5; j++){
    Serial.print("Número: ");
    Serial.println(numeros[j]);
  }

}

//------------------------------------------------

void loop() {
  // put your main code here, to run repeatedly:

}

//------------------------------------------------