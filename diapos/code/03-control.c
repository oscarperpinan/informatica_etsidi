/* Ejemplo =if= */


# include <stdio.h>
int main ()
{
  int n;
  printf("Escribe un número entero\n");
  scanf("%d", &n);
  if (n % 2 == 0) // Condición
    {// Uso de llaves
      printf("Se cumple la condición: ");
      printf("El número %d es par.\n", n);      
    } // Fin de if
  printf("Gracias por participar.\n");
  return 0;
}

/* Ejemplo =if= */


# include <stdio.h>
int main ()
{
  int n;
  printf("Escribe un número entero\n");
  scanf("%d", &n);
  if (n % 2 == 0) // Sin llaves para sentencias simples
    printf("El número %d es par.\n", n);
  // Fin de if
  printf("Gracias por participar.\n");
  return 0;
}

/* Ejemplo =if= */

# include <stdio.h>
int main ()
{
  int n;
  printf("Escribe un número entero\n");
  scanf("%d", &n);
  if (n % 2) //Esta condición no es un booleano
    //La sentencia se ejecuta cuando la condición
    //*no* es igual a cero (n % 2 != 0)
    printf("El número %d es impar.\n", n);
  printf("Gracias por participar.\n");
  return 0;
}

/* Ejemplo =if-else= */


# include <stdio.h>
void main ()
{
  int n;
  printf("Escribe un número entero\n");
  scanf("%d", &n);
  if (n % 2 == 0) // condicion
    { // Inicio de if 
      printf("Se cumple la condición: ");
      printf("El número %d es par.\n", n);      
    }
  else
    { // Inicio de else
      printf("No se cumple la condición: ");
      printf("El número %d es impar.\n", n);      
    } // Fin de if - else
  printf("Gracias por participar.\n");
}

/* Ejemplo =if-else= */


# include <stdio.h>
int main ()
{
  int n;
  printf("Escribe un número entero\n");
  scanf("%d", &n);
  if (n % 2 == 0)
    printf("El número %d es par.\n", n);
  else
    printf("El número %d es impar.\n", n);
  printf("Gracias por participar.\n");
  return 0;
}

/* Ejemplo =if - else - if= */

#include <stdio.h>

void main()
{
  int x, signo;
  printf("Escribe un número: ");
  scanf("%i", &x);

  if (x < 0) 
    // se cumple la primera condición
    printf("El número es negativo.\n");
  else if (x == 0)
    // se cumple la segunda
    printf("El número es 0.\n");
  else
    // no se cumple ninguna
    printf("El número es positivo.\n");
}

/* Ejemplo de =switch - case= */

#include <stdio.h>
void main ()
{
  float v1, v2;
  char op;
  scanf("%f %c %f", &v1, &op, &v2);
  switch(op)
    {
    case '+':
      printf("%.2f\n", v1 + v2);
      break;
    case '-':
      printf("%.2f\n", v1 - v2);
      break;
    default:
      printf("No se hacer esa operación.\n");
      break;
    }
}

/* Atención al uso de =break= */

#include <stdio.h>
void main ()
{
  float v1, v2;
  char op;
  scanf("%f %c %f", &v1, &op, &v2);
  switch(op)
    {
    case '+':
      printf("%.2f\n", v1 + v2);
    case '-':
      printf("%.2f\n", v1 - v2);
    default:
      printf("No se hacer esa operación.\n");
      break;
    }
}

/* Uso de llaves con =switch= */

#include <stdio.h>
void main (){
  float v1, v2;
  char op;
  scanf("%f %c %f", &v1, &op, &v2);
  switch(op)
    {
    case '+':
      printf("Operación Suma:\n");
      printf("%.2f\n", v1 + v2);
      break;
    case '-':
      printf("Operación Resta:\n");
      printf("%.2f\n", v1 - v2);
      break;
    default:
      printf("No se hacer esa operación.\n");
      break;
    }
}

/* Ejemplo: suma de enteros */


#include <stdio.h>

int main()
{
  // Todas las variables deben estar definidas
  // Asigno valor inicial 0 a suma
  int i, suma = 0, n = 10;

  for (i = 1; i <= n; i++)
    {
      suma += i;
    }
  printf("La suma de los %d primeros enteros es %d",
	 n, suma);
  return 0;
}

/* Ejemplo: factorial */


#include <stdio.h>

int main()
{
  int i, n = 20;
  // El factorial alcanza valores grandes
  // y siempre es positivo.
  unsigned long int fact;
  // La expresión de inicio puede ser múltiple,
  // separando por comas.
  // Aquí asigno valor inicial a fact
  for (i = 1, fact = 1; i <= n; i++)
    {
      fact *= i;
    }
  printf("El factorial de %d es %lu", 
	 n, fact);
  return 0;
}

/* Ejemplo: alfabeto */


#include <stdio.h>

int main()
{
  char i;
  // Se pueden usar char en las expresiones 
  for (i = 'a'; i <= 'z'; i++)
    {
      printf("%c", i);
    }
  return 0;
}

/* Ejemplo: bucles anidados */


#include <stdio.h>

int main()
{
  int i, j;
  for (i = 1; i <= 10; i++)
    {
      printf("Tabla del %d\n", i);

      for (j = 1; j <= 10; j++)
	printf("%d x %d = %d\n",
	       i, j, i * j);
    }
  return 0;
}

/* Ejemplo */

#include <stdio.h>

int main()
{
  int i;

  i = 5;
  while (i > 0)
    {
      printf("%d...", i);
      --i;
    }
  printf("Despegue!");
  return 0;
}

/* Ejemplo: número entero al revés */

#include <stdio.h>

int main()
{
  int num = 123456, cifra;

  do
    {
      cifra = num % 10;
      printf("%d", cifra);
      num = num / 10;
    }
  while (num > 0);
  printf("\n");
  return 0;
}

/* Equivalencia */

#include <stdio.h>
void main() {
  int i,n = 10;
  // Bucle for
  for (i = 0; i <= n; i++)
      printf("%d ",i);
  // Bucle while
  i=0;
  while( i<= n) {
      printf("%d ",i);
      i++;
    }
  // Bucle do-while
  i=0;
  do {
      printf("%d ",i);
      i++;
    }
  while(i <= n);
}
