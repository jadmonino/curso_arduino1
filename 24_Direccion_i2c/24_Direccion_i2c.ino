#include <Wire.h>
void setup() {
  Serial.begin(115200);
  delay(1000);
  byte count = 0;

  Wire.begin(SDA, SCL);
  for(byte i = 0; i < 120; i++){
    Wire.beginTransmission(i);
    if(Wire.endTransmission() == 0){
        Serial.print("Dirección encontrada: ");
      Serial.print(i, DEC);
      Serial.print(" 0x");
      Serial.print(i, HEX);
      count++;
      delay(10);
    }
  }
  Serial.print("\n");
  Serial.println("Encontrados: " + String(count));
}

void loop() {
  // put your main code here, to run repeatedly:

}
