#include <DHT.h>   // Se define la libreria a utiliar para el sensor de temperatura y humedad.
#include <WiFi.h>
#include <HTTPClient.h> // Nos comunicamos con internet con el protocolo HTTP

#define DHTPINSEN 13
#define DHTTYPE DHT22  // Definimo el Tipo de Sensor (3 pines).

DHT sensor (DHTPINSEN, DHT22);

float temp = 0.0; // Declaramos la variable temp. 0.0 coma flotante.
float hum = 0.0;  // Declaramos la variable hum.

// Conexión a Internet
WiFiClient clienteWifi; // Variables para conectarnos a WiFi.
HTTPClient http;         // Nos conectamos a HTTP.

char* servidor ="http://192.168.0.49:5000/datos";   // char*--> puntero  //  "direccion IP : puerto de conexión/servicio web";

// conectarnos a Wifi con usuario y contraseña
char* ssid = "Aula 1";
char* pwd = "Horus.2025";



// 1234567.12345 --> 1.234.567,12345

//------------------------------------------------
void setup() {
  Serial.begin(115200); // Definimos la velocidad de transmisión.
  sensor.begin();
  // Wifi
  WiFi.begin(ssid, pwd); // como nos comunicamos a wifi
  while(WiFi.status() !=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.print("Conectado a la IP: ");
  Serial.println(WiFi.localIP());
}
//------------------------------------------------
void loop() {
  temp = sensor.readTemperature();  // El sensor lee la temperatura.
  hum = sensor.readHumidity();      // El sensor lee la humedad.

  postData(temp,hum,"Local José Antonio");

  //Serial.println("Temperatura: " + String(temp));
  //Serial.println("Humedad: " + String(hum));

  delay(5000);

}
//------------------------------------------------

void postData(float t, float h, String per){
  String parametros = 
  "temp=" + String(t) + "&hum=" + String(h) + "&persona=" + per;

  Serial.println(parametros);

  int httpCode;    // código de retorno
  String payLoad;

  if(WiFi.status() == WL_CONNECTED){
    http.begin(clienteWifi,servidor);
    http.addHeader("Content-Type","application/x-www-form-urlencoded");
    httpCode = http.POST(parametros);
    payLoad = http.getString();

    Serial.print("HTTP Code: ");
    Serial.println(httpCode);
    Serial.print("Mensaje: ");
    Serial.println(payLoad);
  }
}

// ----------------------------------------------------------------------------



















