#define LED 25
#define POTEN 4
#define ZUMBA 2
#define POTEN2 15

//--------------------------------------------
int valorPoten = 0;
int valorLed = 0;
int valorPoten2 = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  pinMode(POTEN, INPUT);
  pinMode(ZUMBA, OUTPUT);
  pinMode(POTEN2, INPUT);
}

void loop() {
  // 0 - 4096
  valorPoten = analogRead(POTEN);
  valorLed = map(valorPoten,0,4096,0,255);
  valorPoten2 = analogRead(POTEN2);

  digitalWrite(ZUMBA, LOW);
  delay(500);
  //analogWrite(LED, valorPoten);
  analogWrite(LED, valorLed);

  digitalWrite(ZUMBA, HIGH);
  delay(500);
  //Serial.println("Poten: " + String(valorPoten));
  Serial.println("Poten: " + String(valorLed));

  delay(500);

}
