#include <stdio.h>

void main()
{
	int vector[4] = {7, -10, -2, -4};
	int cont=0, result=0;
	
	for (int i = 0; i < 4; i++)
	{
		if (vector[i] < 0)
		{
			cont = cont +1;
			result = result + vector[i];
		}
	}
	printf("Total de numeros negativos: %d\nTotal da soma dos numeros negativos: %d\n", cont, result);
}
