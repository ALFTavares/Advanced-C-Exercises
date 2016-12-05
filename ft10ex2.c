#include <stdio.h>
#include <string.h>

typedef struct
{
        char nome[25];
        int codigo;
        float preco;
} Produtos;

void main()
{
	int x, i, verificador;
	
	printf("Quantos produtos quer inserir: ");
	scanf(" %d", &x);
	Produtos produto[x];
	
	for (i = 0; i < x; i++)
	{
		printf("Qual o nome do %dº produto: ", (i+1));
		scanf(" %s", produto[i].nome);
		printf("Qual o codigo do produto: ");
		scanf(" %d", &produto[i].codigo);
		printf("Qual o preco do produto: ");
		scanf(" %f", &produto[i].preco);
		printf("\n");
	}
	printf("codigo\tnome\n");
	for (i = 0; i < x; i++)
	{
		printf("%d\t%s\n", produto[i].codigo, produto[i].nome);
	}
	printf("\n");
	printf("Qual o codigo do produto que quer verificar: ");
	scanf(" %d", &verificador);
	for (i = 0; i < x; i++)
	{
		if (verificador == produto[i].codigo)
			printf("codigo: %d\nproduto: %s\npreco: %.2f", produto[i].codigo, produto[i].nome, produto[i].preco);
		
	}
	printf("\n");
}
