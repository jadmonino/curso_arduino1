// https://descubrearduino.com/l293d/

#define VELOCIDAD 14
#define DIRPIN_1 12
#define DIRPIN_2 13
 
// ESTADOS POSIBLES
#define PARO 0
#define DERECHA 1
#define IZQUIERDA 2

// DIODOS LED
#define ROJO 0
#define VERDE 15
#define AZUL 4


void setup() {
  Serial.begin(115200);

  pinMode(VELOCIDAD, OUTPUT);
  pinMode(DIRPIN_1, OUTPUT);
  pinMode(DIRPIN_2, OUTPUT);

  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);

}

void loop() {
  //digitalWrite(VELOCIDAD, HIGH); // Encendemos el motor
  /*Serial.println("Girando en una dirección.");
  analogWrite(VELOCIDAD, 70);
  digitalWrite(DIRPIN_1, 0);
  digitalWrite(DIRPIN_2, 1);
  delay(5000);*/
  cambioEstado(DERECHA);
  delay(5000);

  /* analogWrite(VELOCIDAD, 0); // Aapagamos el motor
  delay(2000);*/
 
  cambioEstado(PARO);
  delay(2000);

  //digitalWrite(VELOCIDAD, HIGH); // Encendemos el motor
  /* Serial.println("Girando en ls otra dirección.");
  analogWrite(VELOCIDAD, 250);
  digitalWrite(DIRPIN_1, 1);
  digitalWrite(DIRPIN_2, 0);
  delay(5000); */

  cambioEstado(IZQUIERDA);
  delay(5000);

  /* Serial.println("Motor parado.");
  analogWrite(VELOCIDAD, 0); // Aapagamos el motor
  delay(2000); */

  cambioEstado(PARO);
  delay(2000);
}
//----------------------------------------------------------------------------
void cambioEstado(int estadoNuevo){
    switch (estadoNuevo) {
    case PARO:
      analogWrite(VELOCIDAD, 0);
      digitalWrite(ROJO, HIGH);
      digitalWrite(VERDE, LOW);
      digitalWrite(AZUL, LOW);
      delay(2000);
      break;
    case DERECHA:
      analogWrite(VELOCIDAD, 70);
      digitalWrite(ROJO, LOW);
      digitalWrite(VERDE, HIGH);
      digitalWrite(AZUL, LOW);
      digitalWrite(DIRPIN_1, 0);
      digitalWrite(DIRPIN_2, 1);
      delay(5000);
      break;
    case IZQUIERDA:
      analogWrite(VELOCIDAD, 250);
      digitalWrite(ROJO, LOW);
      digitalWrite(VERDE, LOW);
      digitalWrite(AZUL, HIGH);
      digitalWrite(DIRPIN_1, 1);
      digitalWrite(DIRPIN_2, 0);
      delay(5000);
      break;
    }
}
























