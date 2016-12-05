#include <stdio.h>

void main()
{
	int vector[6] = {5, 7, 8, 10, 12, 16};
	int par=0, impar=0;
	
	for (int i = 0; i < 6; i++)
	{
		if (vector[i] % 2 == 0)
			par = par + vector[i];
		else
			impar = impar + vector[i];
	}
	printf("Total de pares = %d\nTotal de impares = %d\n", par, impar);
}
