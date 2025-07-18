// ## FUNCIONES
// ------------

// Las funciones de define:
// Tipo Nombre_funcion(tipo param1, tipo param2 .......){

//}
// Hay funciones que devuelven datos y lo puede meter en una variable, otras que no devuelven nada.
// int nombre_funcion(tipo param1, tipo param2 .......){

//}

//--------------------------------------------------
//--------------------------------------------------
void setup() {
  Serial.begin(115200);
  delay(500);

  //--int numero = sumar(3,2); comentario OK
  //--Serial.println(numero);  comentario OK

  int acumulador = 0;               // Definimos las variables
  int valores[] = {1,2,3,4,5,6,7}; 

  for(int i = 0; i<7; i++){                     // Definimos un bucle FOR
    acumulador = sumar(acumulador, valores[i]);
  }

  Serial.print("Total: ");         // Definimos el texto a imprimir
  Serial.println(acumulador);      // Imprimimos en monitor serie el resultado

//--------------------------------------------------

char cadena[] = "Hola mundo";
int largo = longitudCadena(cadena);
Serial.print("Total longitud: ");
Serial.println(largo);

//-------------------------------------------------

char* resultado;
resultado = invertirCadena(cadena);
Serial.print("=riginal: ");
Serial.println(cadena);
Serial.print("inversa: ");
Serial.println(resultado);

}

//--------------------------------------------------
void loop() {
  // put your main code here, to run repeatedly:
}
//--------------------------------------------------
// FUNCIONES 
// Función de suma dos números

int sumar(int primero, int segundo){
/*
  1. Validar las entradas.
  2. Hacer el trabajo.
  3. Validar los resultados.
*/
int temp = primero + segundo;
return temp;
}

// Funcion que calcules la longitud de una cadena.
// camelCase
// PascalCase
// snake_Case

int longitudCadena(char cadena[]){
    int i = 0;
  while(cadena[i] != '\0'){       // '\0' fin de cadena
    i++;
  }
  return i;  

}

//---------------según Alfonso---------------------------

char* invertirCadena(char * cadena){
  int longitud = longitudCadena(cadena);
  char* inversa = new char[longitud + 1];
  int j = 0;
  for(int i = longitud -1; i>=0; i--){
    inversa[j] = cadena[i];
    j++;
  }
  inversa[longitud] = '\0';
  return inversa;
 
//------------------------------------------------------ 

  char* inversa(char* cadena){
  int longitud = longitudCadena(cadena);
  char* temp[longitud];
  for(int i = 0; i < longitud; i++){
    temp[longitud -i -1] = cadena[i]
  }
  return temp;
 }

}










