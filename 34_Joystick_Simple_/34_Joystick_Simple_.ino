

//----------DEFINIMOS LOS PINES----------------------------------------------
#define PIN_X 13
#define PIN_Y 12
#define PIN_SW 14

#define LED_VERDE_1 15
#define LED_ROJO 19
#define LED_AZUL 4
#define LED_VERDE_2 5   // ESTE

//int brujula[] = (LED_VERDE_1, LED_ROJO, LED_AZUL, LED_VERDE_2);

int cero_X = 1922;
int cero_Y = 1813;


//----------------------------------------------------------------------------
void setup() {
  Serial.begin(115200);
  pinMode(PIN_X, INPUT);
  pinMode(PIN_Y, INPUT);
  pinMode(PIN_SW, INPUT_PULLUP);  // INPUT_PULLUP, siempre apagado

  pinMode(LED_VERDE_1, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_VERDE_2, OUTPUT);

}
//----------------------------------------------------------------------------
void loop() {
  int valor_X = analogRead(PIN_X);
  int valor_Y = analogRead(PIN_Y);
  int valor_SW = analogRead(PIN_SW);

  int valor_VERDE1 = analogRead(LED_VERDE_1);
  int valor_ROJO = analogRead(LED_ROJO);
  int valor_AZUL = analogRead(LED_AZUL);
  int valor_VERDE2 = analogRead(LED_VERDE_2);

  Serial.print("X, Y, Z: <> ");
  Serial.print(String(valor_X) + ",");
  Serial.print(String(valor_Y) + ",");
  Serial.println(String(valor_SW));

  Serial.print("VERDE1, ROJO, AZUL, VERDE2: <> ");
  Serial.print(String(valor_VERDE1) + ",");
  Serial.print(String(valor_ROJO) + ",");
  Serial.println(String(valor_AZUL) + ",");
  Serial.println(String(valor_VERDE2));

  if (valor_X - cero_X > 0) {    // DERECHA
    Serial.println("Derecha:  " + String(valor_X - cero_X));
    onOffLed(LED_VERDE_1, HIGH);
    //digitalWrite(LED_VERDE_1, HIGH);
    //digitalWrite(LED_ROJO, LOW);
    //digitalWrite(LED_AZUL, LOW);
    //digitalWrite(LED_VERDE_2, LOW);
  }

  if (valor_X - cero_X < -10) {   // IZQUIERDA
    Serial.println("Izquierda:  " + String(valor_X - cero_X));
    onOffLed(LED_ROJO, HIGH);
    //digitalWrite(LED_VERDE_1, LOW);
    //digitalWrite(LED_ROJO, HIGH);
    //digitalWrite(LED_AZUL, LOW);
    //digitalWrite(LED_VERDE_2, LOW);
  }

  if (valor_Y - cero_Y > 0) {   // ARRIBA
    Serial.println("Arriba:  " + String(valor_X - cero_X));
    onOffLed(LED_AZUL, HIGH);
    //digitalWrite(LED_VERDE_1, LOW);
    //digitalWrite(LED_ROJO, LOW);
    //digitalWrite(LED_AZUL, HIGH);
    //digitalWrite(LED_VERDE_2, LOW);
  }

  if (valor_Y - cero_Y < -10) {   // ABAJO
    Serial.println("Abajo:  " + String(valor_X - cero_X));
    onOffLed(LED_VERDE_2, HIGH);
    //digitalWrite(LED_VERDE_1, LOW);
    //digitalWrite(LED_ROJO, LOW);
    //digitalWrite(LED_AZUL, LOW);
    //digitalWrite(LED_VERDE_2, HIGH);
  }

  delay(5000);

}

// Se define una función de apagar y encender
void onOffLed(int led, int valor){
  digitalWrite(LED_VERDE_1, LOW);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERDE_2, LOW);

  digitalWrite(led, valor);
}






//----------------------------------------------------------------------------