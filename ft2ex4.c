#include <stdio.h>

int factorial(int num);

void main()
{
	int fact, res;
	
	printf("introduza o numero para calcular o factorial: ");
	scanf("%d", &fact);
	
	res = factorial(fact);
	
	printf("Factorial de %d = %d\n", fact, res);
}

int factorial(int num)
{
	int x, res;
	
	x = 1;
	for (int i = num; i > 0; i--)
	{
		x = x*i;
	}
	return x;	
}
