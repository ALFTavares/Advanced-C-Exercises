#include <stdio.h>

void main()
{
	int vector[5] = {2, 4, -2, 6, 10};
	int result=0, cont=0;
	
	for (int i = 0; i < 5; i++)
	{
		if (vector[i] < 0)
			cont = cont + 1;
		else
			result = result + vector[i];
	}
	printf("Total de numeros negativos: %d\nSoma dos numeros positivos: %d\n", cont, result);
}
