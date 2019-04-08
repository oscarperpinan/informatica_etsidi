/* Tipo =FILE= */

/* En C se emplea la estructura de datos de tipo =FILE= (declarada en =stdio.h=): */


#include <stdio.h>
void main ()
{
  FILE *pf;
}

/* Abrir un fichero: =fopen= */


int main() {
FILE *fopen (const char *nombre, const char *modo);
return 0;
}

/* Ejemplo de =fopen= */


#include <stdio.h>
int main ()
{
  FILE *pf;
  // Atención a la ruta del fichero, y a las comillas dobles
  pf = fopen("c:\ejemplos\fichero.txt", "r");
  if (pf == NULL)
    {
      printf("Error al abrir el fichero.\n");
      return -1;
    }
  else
    {
      printf("Fichero abierto correctamente.\n");
      return 0;
    }
}

/* Cerrar un fichero: =fclose= */

int main() {
int fclose (FILE *pf);
return 0;
}

/* Escritura de ficheros: =fprintf= */


int main() {
int fprintf(FILE *stream, const char *format, ...)
return 0;
}

/* Ejemplo de =fprintf= */
/*    :PROPERTIES: */
/*    :beamer_opt: plain */
/*    :END: */

#include <stdio.h>

int main(){
  FILE *pf;
  int vals[3] = {1, 2, 3};
  // Abrimos fichero para escritura
  pf = fopen("datos.txt", "w");
  if (pf == NULL) 
    {// Si el resultado es NULL mensaje de error 
      printf("Error al abrir el fichero.\n");
      return -1;
    }
  else
    {// Si ha funcionado, comienza escritura
      fprintf(pf, "%i, %i, %i",
	      vals[0], vals[1], vals[2]);
      fclose(pf); // Cerramos fichero
      return 0;
    }
}

/* Lectura de ficheros: =fscanf= */


int main() {
int fscanf(FILE *stream, const char *format, ...)
return 0;
}

/* Ejemplo de =fscanf= */
/*    :PROPERTIES: */
/*    :beamer_opt: plain */
/*    :END: */


#include <stdio.h>

int main()
{
  int i, n, vals[3];
  FILE *pf;
  // Abrimos fichero para lectura
  pf = fopen("datos.txt", "r");
  // Leemos datos separados por comas
  n = fscanf(pf, "%i, %i, %i",
	 &vals[0], &vals[1], &vals[2]);
  printf("Se han leído %i argumentos.\n", n);
  fclose(pf);
  // Mostramos en pantalla lo leído
  for (i = 0; i < 3; i++)
    printf("%i\t", vals[i]);

  return(0);
}

/* =fgetc= y =fgets= */
/* - La función =fgetc= lee un carácter del fichero y lo *devuelve como =int=*: */

int main() {
  int fgetc (FILE *pf);
return 0;
}



/* - La función =fgets= lee una cadena de caracteres del fichero: */

int main() {
  char *fgets (char *cadena, int n, FILE *pf);
return 0;
}

/* Ejemplo de =fgetc= */
/*    :PROPERTIES: */
/*    :beamer_opt: plain */
/*    :END: */

#include <stdio.h>

int main()
{
  int i;
  char texto[27];
  FILE *pf;
  // Abrimos fichero para lectura
  pf = fopen("lorem_ipsum.txt", "r");
  // Leemos los 26 primeros caracteres
  for (i = 0; i < 26; i++)
    texto[i] = fgetc(pf);
  // Añadimos caracter nulo
  texto[26] = '\0';
  // Mostramos resultado
  printf("%s", texto);
  fclose(pf);
  return(0);
}

/* Ejemplo ¡COMPROBAR! */
/* Sea un fichero con el siguiente contenido: */
/* #+BEGIN_QUOTE */
/* Jorge Rodríguez; Profesor; 35; 84.4 */

/* Mercedes Pérez; Estudiante; 21; 56.2 */
/* #+END_QUOTE */

/* Para leerlo: */

int main() {
fscanf(pf, "%[^;];%[^;];%d;%f\n",
       nombre, tipo, &edad, &peso);
return 0;
}

/* Comprobación de =EOF= */
/* - =feof= detecta el final del fichero: devuelve un valor distinto de cero después de la primera operación que intente leer después de la marca final del fichero.  */


int main() {
while (feof(pf) == 0)
{
// Operaciones de L/E
}
return 0;
}



/* - =fscanf= y =fprintf= devuelven =EOF= cuando alcanzan la marca. Se puede emplear directamente este resultado (sin necesidad de =feof=) */

int main() {
while(fscanf(...) !=EOF )
{
// Sentencias
}
return 0;
}

/* Ejemplo: número de líneas de un fichero */


#include <stdio.h>

int main()
{
  int i, nLineas = 0;
  char x; // Variable auxiliar
  FILE *pf;
  pf = fopen("lorem_ipsum.txt", "r");
  // Leemos caracter a caracter
  while (fscanf(pf, "%c", &x) != EOF)
    //Si lo leído es un salto de línea
      if (x == '\n')
	//incrementamos el contador
	++nLineas;
  printf("%i", nLineas);
  return 0;
}

/* Ejemplo */

#include <stdio.h>

int main(){
  printf("hello there.\n");
  fprintf(stdout, "hello there.\n");
  return 0;
}

/* =fseek= */


int main() {
int fseek(FILE *stream, long int offset, int whence)
return 0;
}

/* =ftell= */

int main() {
long int ftell(FILE *stream)
return 0;
}

/* Ejemplo: nº de bytes de un fichero */


#include <stdio.h>

int main()
{
  long int fsize; // tamaño del fichero
  FILE *pf;
  pf = fopen("datos.txt", "r");
  // Desplaza al final
  fseek(pf, 0, SEEK_END);
  //Almacena la posición
  fsize = ftell(pf);
  printf("El fichero tiene %li bytes.\n",
	 fsize);
  return 0;
}
