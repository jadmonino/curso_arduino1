//---------------------------------------------------
// IP Multisala
#include <WiFi.h>
#include <WebServer.h>
#include <DHT.h>

#define LED 4
#define DHTPIN 13
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

char* ssid = "Aula 1";
char* pwd = "Horus.2025";

float temp = 0.0;
float hume = 0.0;


WebServer servidor(80); // server es una variable y WebServer es el tipo (80) es el puerto

// Páginas

String home = "<!DOCTYPE html><html lang=\"es\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width,initial-scale=1.0\"><title>Ejercico_1 Practica HTML</title></head><body><h1>Hola Mundo</h1><h2>Esta es la primera página Web</h2><h3>ARDUINO</h3><a href=\"/Segunda\">Ir a la segunda página</a></body></html>";

String segunda ="<!DOCTYPE html><html lang=\"es\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width,initial-scale=1.0\"><title>Segunda Página</title></head><body><h1>Esta es la segunda página ARDUINO</h1><H2>MI NOMBRE ES JOSE ANTONIO</H2></body></html>";

String temperatura ="<!DOCTYPE html><html lang=\"es\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width,initial-scale=1.0\"><title>Temperatura & Humedad</title></head><body><h1>TEMPERATURA Y HUMEDAD</h1><h1>Arduino:Temperatura: ##temp##</h1><H2>Arduino:Humedad: ##hum##</H2></body></html>";


//-------NOS CONECTAMOS A LA RED WIFI Y NOS DA LA DIRECCIÓN IP------
void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);   // Modo de conectarnos a internet
  WiFi.begin(ssid, pwd);
  pinMode(LED, OUTPUT);
  dht.begin();

  while(WiFi.status() != WL_CONNECTED){   // Estado de si hay conexión
    delay(500);
    Serial.print(".");
  } 
  Serial.print("\n");
  Serial.print("Conectado a la IP: ");
  Serial.println(WiFi.localIP());

// Solicitud WEB
servidor.on("/", handle_OnConnect);  //handle_OnConnect este nombre el que queramos. Es una función que vamos a crear.
servidor.on("/Segunda", handle_segunda);
servidor.on("/Led_on", handle_encender);
servidor.on("/Led_off", handle_apagar);

  servidor.begin();  // iniciamos el servidor web
  Serial.println("Servidor Web iniciado: ");  
}
//---------------------------------------------------
void loop() {
  servidor.handleClient();
}
//---------------------------------------------------
//---------este es la dirección de mi arduino 192.168.0.58 ----------

// Función de respuesta a las páginas web

void handle_OnConnect(){
  servidor.send(200, "text/html", home);  // Code de que todo va bien
}
//-------------Funcion de segunda pagina web---------------------------------
void handle_segunda(){
  servidor.send(200, "text/html", segunda);  // Code de que todo va bien
}
//-------------Funcion de encender led---------------------------------
void handle_encender(){
     digitalWrite(LED, HIGH);
     servidor.send(200, "text/html", "");  
}
//-------------Funcion de APAGAR led---------------------------------
void handle_apagar(){
     digitalWrite(LED, LOW);
     servidor.send(200, "text/html", "");  
}
//-------------Funcion de APAGAR led---------------------------------
void handle_apagar(){
     digitalWrite(LED, LOW);
     servidor.send(200, "text/html", "");  
}


