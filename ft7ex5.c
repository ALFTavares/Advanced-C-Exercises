#include <stdio.h>

void main()
{
	int numeros[50];
	int x=0;
	
	for (int i = 0; i < 50; i++)
	{
		x += 2;
		numeros[i] = x;
		printf("%d\n", numeros[i]);
	}
}
