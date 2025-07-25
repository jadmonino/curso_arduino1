#define FOTOPIN 4
#define LED 12

#define UMBRAL 2000

int valorLuz = 0;
int valorLed = 0;

void setup() {
  Serial.begin(115200);
  pinMode(FOTOPIN, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  valorLuz = analogRead(FOTOPIN);
  valorLed = 255 - map(valorLuz,0,4096,0,255);
  //analogWrite(LED, valorLed);
  if(valorLuz < UMBRAL){
    digitalWrite(LED, HIGH);
  }
   else(
      digitalWrite(LED, LOW);
    )
  }
  Serial.println(valorLuz);
  delay(500);

}
