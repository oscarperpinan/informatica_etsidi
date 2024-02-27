#include <stdio.h>
int main ()
{
	float v1, v2;
	char op;
	
	printf("Escriba 2 numeros y la operacion que quiera realizar: \n");
	scanf(" %f %c %f", &v1, &op, &v2);
	
	switch(op)
	{
		case '+':
			printf("Operación suma: %f\n", v1 + v2);
			break;

		case '-':
			printf("Operación resta %f\n", v1 - v2);
			break;
		
		case '*':
			printf("Operación producto %f\n", v1 * v2);
			break;
		
		case '/':
			if(v2 != 0)
			{
				printf("Operación division %f\n", v1 / v2);
				break;
			}
			
		default:
			printf("No se hacer esa operación.\n");
	}
	return 0;
}
