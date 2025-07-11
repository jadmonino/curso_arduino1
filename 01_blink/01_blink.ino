#define PIN_LED 2 /* Se define la Patilla */
#define PIN_ROJO 12 /* Se define la Patilla */

int contador = 0; /* defino la variable contador y le doy el valor 0 */

void setup() {
  Serial.begin(115200); /* Enciendo el monitor serie. Velocidad en baudios, para el monitor serie */
  delay(50); /* se espera a que se inicie 50 milisegundo */
  Serial.println("Serial encendido");
  pinMode(PIN_LED, OUTPUT); /* Patilla de salida*/
  pinMode(PIN_ROJO, OUTPUT); /* Patilla de salida*/
}

void loop() {

  digitalWrite(PIN_LED, HIGH); /* enciendo el led */
  digitalWrite(PIN_ROJO, LOW); /* apagado el led */
  Serial.println("Encendido.");

  // contador = contador + 1; la de abajo es equivalente a esta.
  // contador += 1;
  contador ++;
  Serial.println(contador);

  delay(500); /* tiempo encendido 500 mil-segundo */

  digitalWrite(PIN_LED, LOW); /* apagado */
  digitalWrite(PIN_ROJO, HIGH); /* encendido */
  Serial.println("Apagado.");
  delay(500); /* se espera 500 mili-segundo apagado */

}
