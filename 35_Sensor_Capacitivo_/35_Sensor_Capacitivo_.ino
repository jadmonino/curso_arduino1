#define SENSOR 15

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR, INPUT);
  


}

void loop() {
  int lectura = touchRead(SENSOR);
  Serial.println("Sensor: " + String(lectura));
  delay(5000);
}
