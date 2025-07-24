//-----------------------------------------------------------------------------
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <DHT.h>

#define DHTTYPE DHT11
#define DHTPIN 12
#define SDA 13
#define SCL 14
#define ADDR 0x27

LiquidCrystal_I2C lcd(ADDR,16,2);
DHT dht(DHTPIN, DHTTYPE);

float temp = 0.0;
float hume = 0.0;

//-----------------------------------------------------------------------------
void setup() {
  Wire.begin(SDA, SCL);
  dht.begin();

  lcd.init();
  lcd.noBacklight();
  delay(500);
  lcd.backlight();
}
//-----------------------------------------------------------------------------
void loop() {
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(char(223));
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Hum: ");

  delay(5000);

}
//-----------------------------------------------------------------------------