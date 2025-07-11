// Hola Mundo. Comentario en una línea.
/* comentarios en varias líneas*/
/* El lenguaje C es un lenguaje compilado, el C se compila y se convierte en un ejecutable. En el microcontrolador se ejecuta un solo instrucciones. "no reinventar la rueda" El compilador traduce el lenguaje humano a código humano. Libreria = Biblioteca. */
/* Como usar una libreria o biblioteca #include < nombre > */
/* El lenguaje C es sensible a las mayúsculas */
/* paco, Paco, PACO, son tres variables. */
/* Un linter es una herramienta que te obliga a tener una codificación normalizada. */
/* El lenguaje C, es un lenguaje es fuertemente "tipado". 
string nombre = "teo"
int edad = 11  /  nombre = 12 esto da un error / edad = "hola" esto da un error, en "C" cuando se declara una variable, se tiene que decir de que tipo es esa variable.
Terminador de instrucciones ";" / char * calle = "Sierpes"; / char calle = "S";  */
/* Ciclo de vida de la variables = Las variables se definen -> se inicializan -> se usan -> se destruyen
String nombre;
int edad;
nombre = "Teo";
edad = 11;
int primero = 0;  / todas la variables tienen que estar definida o un valor; int contador = -1;  libros de programación en "C" */
/* Ambito de la variables: 
- Globales, se declarán al principio.
- Locales */


#include <stdio.h>
#include <WIFI.h>

void setup() { // esto es una llave
  // put your setup code here, to run once:
  int numero = 0; // Varable Local

}

void loop() {
  // put your main code here, to run repeatedly:

}
