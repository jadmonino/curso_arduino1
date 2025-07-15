int dia = 3;
String nombreDia = "";

// ---------------------------------------------

void setup() {
  Serial.begin(115200);
  delay(500);

  switch (dia) {
  case 1:
  nombreDia = "Lunes";
  break;
  case 2:
  nombreDia = "Martes";
  break;
  case 3:
  nombreDia = "Miércoles";
  break;
  case 4:
  nombreDia = "Juevess";
  break;
  case 5:
  nombreDia = "Viernes";
  break;
  case 6:
  nombreDia = "Sábado";
  break;
  case 7:
  nombreDia = "Domingo";
  break;
  }
  Serial.println("El día de la semana es " + nombreDia);

}

// ---------------------------------------------

// Nota >= 0 y <= 10 podemos usar un "IF" y un "ELSE"<

int nota = 0;

String calificacion = "";

void loop() {
Serial.begin(115200);
delay(500);

switch (nota) {
  case 1:
  case 2:
  case 3:
  case 4:
  calificacion = "SUSPENSO";
  break;
  case 5 ... 6:
  calificacion = "APROBADO";
  break;
  case 7 ... 8:
   calificacion = "NOTABLE";
  break;
  default:    // case default
   calificacion = "SOBRESALIENTE";
  break;
}

Serial.println("La calificación es " + calificacion);

}





















