#include <stdio.h>

void main()
{
	int vector[5] = {12, 7, 5, 16, 20};
	int x=0;
	
	for (int i = 0; i < 5; i++)
	{
		if (vector[i] >= 10)
			x++;
	}
	printf("Quantidade de numeros maiores ou iguais que 10: %d\n", x);
}
