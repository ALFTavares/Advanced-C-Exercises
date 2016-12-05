#include <stdio.h>
#include <string.h>

void main()
{
	char nome[50];
	int x;
	
	printf("Introduza o nome: ");
	scanf("%s", nome);
	x = strlen(nome);
	
	for (int i = x; i >= 0; i--)
	{
		printf("%c", nome[i]);
	}
	printf("\n");
}
