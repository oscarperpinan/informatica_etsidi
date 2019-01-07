/* Prototipo de una función: */
/*   1. Tipo de valor que devuelve (=int=, =void=, ...) */
/*   2. Nombre de la función (debe ser un identificador válido y *útil*). */
/*   3. Lista de argumentos que emplea, por tipo y nombre (puede estar vacía). */


int main() {
tipo nombre_funcion(tipo1 arg1, tipo2 arg2, ...);
return 0;
}

/* Ejemplos */

int main() {
void printHello(int veces);

float areaTriangulo(float b, float h);
return 0;
}

/* ¿Cómo se define una función? */

int main() {
// Definicion de la funcion printHello

// No devuelve nada (void)

// Necesita un argumento llamado veces,
// un entero (int), para funcionar.

void printHello(int veces)
{
  int i;
  for (i = 1; i <= veces; i++)
    printf("Hello World!\n");
}
return 0;
}

/* ¿Cómo se define una función? */

int main() {
// Definicion de la funcion areaTriangulo

// Devuelve un real (float)

// Necesita dos argumentos, b y h, reales.

float areaTriangulo(float b, float h)
{
  float area;

  area = b * h / 2.0;

  return area;
}
return 0;
}

/* Directivas de inclusión =include= */
/* Permiten incluir cabeceras (definiciones) procedentes de otros archivos */


int main() {
//Librerias del sistema
#include <stdio.h>
#include <math.h>
//Librerias propias del desarrollador
#include "myHeader.h"
return 0;
}

/* Directivas de sustitución =define= */
/* - =define= permite definir símbolos que serán sustituidos por su valor. */

#include <stdio.h>
//Habitualmente con mayúsculas
//Atención: SIN signo igual NI punto y coma
#define PI 3.141592

int main()
{
  float r = 2.0;
  printf("Una circunferencia de radio %f", r);
  printf(" tiene un area de %f", PI * r * r);
  return 0;
}

 

/* - =undef= elimina la definición del símbolo. */

int main() {
#undef PI
return 0;
}

/* Declaración y definición de funciones */

#include <stdio.h>

// Prototipo de la función (termina en ;)
void printHello(int n);

// Función main
void main()
{
  //Uso de la función en main
  printHello(3);
}

// Definición de la función
void printHello(int n)
{
  int i;
  for (i = 1; i <= n; i++)
    printf("Hello World!\n");
}

/* Declaración y definición de funciones */

#include <stdio.h>

// Prototipo de la función (termina en ;)
float areaTriangulo(float b, float h);

// Función main
void main()
{
  float at;
  //Uso de la función en main
  at = areaTriangulo(1, 2);
  printf("%f", at);
}
// Definición de la función
float areaTriangulo(float b, float h)
{
  float area;
  area = b * h / 2.0;
  return area;
}

/* Variables globales */


#include <stdio.h>

int gVar = 3; //Variable global

void foo(void);

void main(){
  printf("main (1):\t gVar es %d.\n", gVar);

  foo();

  gVar *= 2;
  printf("main (2):\t gVar es %d.\n", gVar);
}

void foo(void)
{
  gVar = gVar + 1;
  printf("foo:\t gVar es %d.\n", gVar);
}

/* Variables locales */

#include <stdio.h>

void foo(void);

void main()
{
  int x = 1; // variable local en main
  printf("main (1):\t x es %d.\n", x);

  foo();
  
  printf("main (2):\t x es %d.\n", x);
}

void foo(void)
{
  int x = 2; // variable local en foo
  printf("foo:\t x es %d.\n", x);
}

/* Ejemplo */

#include <stdio.h>
#define PI 3.141592

float eleva3(float x);
float volEsfera(float r);

void main(){
  float radio, vol;
  scanf("%f", &radio);
  vol = volEsfera(radio);
  printf("El volumen es %f", vol);
}

float volEsfera(float r){ //Usa eleva3
  return 4.0/3.0 * PI * eleva3(r);
}

float eleva3(float x){
  return x * x * x;
}

/* Funciones recursivas */

#include <stdio.h>

int fact(int n);

void main(){
  int x;
  printf("Indica un número:\n");
  scanf("%d", &x);
  printf("El factorial de %d es %d\n", x, fact(x));
}

int fact(int n){
  int res;
  if (n > 1) // Incluye llamada a si misma
    res = n * fact(n - 1);
  else
    res = 1;
  return res;
}

/* Fichero =myLib.h= (cabecera) */

int main() {
#define PI 3.141592

float eleva3(float x);
float volEsfera(float r);
return 0;
}

/* Fichero =myLib.c= (código fuente) */

int main() {
#include "myLib.h"

float volEsfera(float r){
  return 4.0/3.0 * PI * eleva3(r);
}

float eleva3(float x){
  return x * x * x;
}
return 0;
}

/* Programa principal */

#include <stdio.h>
// Directiva para incluir la librería local
#include "myLib.h" 

void main()
{
  float radio, vol;
  scanf("%f", &radio);
  vol = volEsfera(radio);
  printf("El volumen es %f", vol);
}
