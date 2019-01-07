#include <stdio.h>

int main()
{
  double f1 = 100;
  int i1 = 150, i2 = 100;
  printf("Un entero, %d, dividido por un real, %f, produce un real, %f\n",
	 i1, f1, i1 / f1);
  printf("Y un entero, %d, por un entero, %d ... %d\n",
	 i1, i2, i1 / i2);
  getchar();
  return 0;
}
