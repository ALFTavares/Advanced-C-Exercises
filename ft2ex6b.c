#include <stdio.h>

float resultado	(int a, int b);
void reprovado();
void oral();
void aprovado();

void main()
{
	int x, y;
	float result;
	
	printf("introduza a primeira nota: ");
	scanf("%d", &x);
	printf("introduza a segunda nota: ");
	scanf(" %d", &y);
	
	result = resultado(x, y);
	
	if (result <= 7.5)
		reprovado();
	else if (result <= 9.5)
		oral();
	else
		aprovado();
}

float resultado(int a, int b)
{
	float res;
	char result[50];
	
	res=(a*b)/2;
	
	return res;
}

void reprovado()
{
	printf("Reprovado");
}

void oral()
{
	printf("Prova Oral");
}

void aprovado()
{
	printf("Aprovado");
}
