#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define SDA 13
#define SCL 14
#define ADDR 0x27 // la otra dirección es 0x27; dirección de memoria LCD

//------------------------------------------------------------------------------
LiquidCrystal_I2C lcd(ADDR,16,2);  // Definimo variable lcd; Manejador o handle


//------------------------------------------------------------------------------
void setup() {
  Serial.begin(115200);
  Wire.begin(SDA, SCL);
  lcd.init();
  lcd.clear();
  lcd.backlight();
}
//------------------------------------------------------------------------------
void loop() {
  if(Serial.available()){
    delay(100);
    lcd.clear();
    while(Serial.available() > 0){
      lcd.write(Serial.read());
    }
  }

}
//------------------------------------------------------------------------------