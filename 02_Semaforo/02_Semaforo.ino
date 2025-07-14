#define ROJO 12
#define VERDE 13
#define AZUL 14

void setup() {
 Serial.begin(115200);
 pinMode(ROJO, OUTPUT);
 pinMode(VERDE, OUTPUT);
 pinMode(AZUL, OUTPUT);
}

void loop() {
  // ROJO ENCENDIDO
  Serial.print("Rojo Encendido.\n");
  digitalWrite(ROJO, HIGH);
  digitalWrite(VERDE, LOW); 
  digitalWrite(AZUL, LOW); 
  delay(500);

   // VERDE ENCENDIDO
  Serial.print("Verde Encendido.\n"); 
  digitalWrite(ROJO, LOW); 
  digitalWrite(VERDE, HIGH);
  digitalWrite(AZUL, LOW);
  delay(500);

   // AZUL ENCENDIDO
  Serial.print("Azul Encendido.\n");
  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AZUL, HIGH);
  delay(500);
}