#include <stdio.h>

float media(float nota_1, float nota_2);

void main()
{
	float nota1, nota2, res;
	
	printf("Introduza a nota 1: ");
	scanf("%f", &nota1);
	printf("Introduza a nota 2: ");
	scanf(" %f", &nota2);
	
	res = media(nota1, nota2);
	
	if (res < 7.5)
		printf("Nota: %.1f -Reprovado", res);
	else if (res < 9.5)
		printf("Nota: %.1f -Necessário prova oral", res);
	else
		printf("Nota: %.1f - Aprovado", res);
	
	printf("\n");
}

float media(float nota_1, float nota_2)
{
	float res;
	
	res = (nota_1 + nota_2) / 2;
	
	return res;
}
