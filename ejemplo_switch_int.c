#include <stdio.h>
int main ()
{
	int num;
	int v1 = 1, v2 = 2;
	printf("Elija entre estas 4 opciones:\n");
	printf("1. Suma.\n");
	printf("2. Resta.\n");
	printf("3. Producto.\n");
	printf("4. Division\n");
	scanf("%i", &num);
	
	switch(num)
	{
		case 1:
			printf("Operacion suma: %i\n", v1 + v2);
			break;

		case 2:
			printf("Operacion resta %i\n", v1 - v2);
			break;
		
		case 3:
			printf("Operacion producto %i\n", v1 * v2);
			break;
		
		case 4:
			if(v2 != 0)
			{
				printf("Operacion division %i\n", v1 / v2);
				break;
			}
			
		default:
			printf("No se hacer esa operación.\n");
	}
	return 0;
}
