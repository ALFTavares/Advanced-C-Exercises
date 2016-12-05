#include <stdio.h>

void troca(int n1, int n2);

void main()
{
	int num1, num2;
	
	printf("Insira o 1º valor: ");
	scanf("%d", &num1);
	printf("Insira o 2º valor: ");
	scanf(" %d", &num2);
	
	troca(num1, num2);
}

void troca(int n1, int n2)
{
	int n3;
	
	n3 = n2;
	n2 = n1;
	n1 = n3;
	
	printf("primeiro numero = %d\nsegundo numero = %d\n", n1, n2);
}
