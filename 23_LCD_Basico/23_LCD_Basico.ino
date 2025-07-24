#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define SDA 13
#define SCL 14
#define ADDR 0x27 // la otra dirección es 0x27; dirección de memoria LCD

//------------------------------------------------------------------------------
LiquidCrystal_I2C lcd(ADDR,16,2);  // Definimo variable lcd; Manejador o handle


//------------------------------------------------------------------------------
void setup() {
  Wire.begin(SDA, SCL);
  //Wire.beginTransmission(ADDR);


  lcd.init();
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
  //lcd.setCursor(0,0);
  //lcd.print("Hola Mundo");
  //lcd.setCursor(0,1);
  //lcd.print("Bienvenidos . . . ");

}
//------------------------------------------------------------------------------
void loop() {
  //lcd.setCursor(5,0);
  //lcd.print("Adios");
  
  lcd.setCursor(0,0);
  lcd.print("Temp: 12.3 ");
  lcd.print(char(223));
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Hum: 45%");

  delay(5000);



}
//------------------------------------------------------------------------------