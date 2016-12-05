#include <stdio.h>

void main()
{
	int x, maior, menor;
	
	do
	{
		printf("insira um numero: "); scanf("%d", &x);
		
		if (x > maior)
			maior = x;
		if (x < menor && x >= 0)
			menor = x;
	}while (x >= 0);
	printf("O maior numero foi %d\nO menor numero foi %d\n", maior, menor);
}
