#include <stdio.h>

int mult(int tabuada, int i);

void main()
{
	int tabuada, res;
	
	printf("Introduza a tabuada: ");
	scanf("%d", &tabuada);
	
	for (int i = 1; i < 11; i++)
	{
		res = mult(tabuada, i);
		printf("%d x %d = %d\n", tabuada, i, res);
	}
}

int mult(int tabuada, int i)
{
	int res;
	
	res = tabuada * i;
	
	return res;
}
