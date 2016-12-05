#include <stdio.h>
#include <string.h>

typedef struct
{
        int matricula;
        char nome[100];
        float nota1;
        float nota2;
} Aluno;

void main()
{
	int x, mat;
	char nomealuno[50];
	float media[x], n1, n2;
	printf("Introduza o numero de alunos: ");
	scanf("%d", &x);
	Aluno alunos[x];
	
	for (int i = 0; i < x; i++)
	{
		printf("Qual a matricula do %dº aluno: ", i+1);
		scanf(" %d", &mat);
		alunos[i].matricula = mat;
		printf("Qual o nome do %dº aluno: ", i+1);
		scanf(" %s", nomealuno);
		strcpy(alunos[i].nome, nomealuno);
		printf("Qual a 1ª nota do %dº aluno: ", i+1);
		scanf(" %f", &n1);
		alunos[i].nota1 = n1;
		printf("Qual a 2ª nota do %dº aluno: ", i+1);
		scanf(" %f", &n2);
		alunos[i].nota2 = n2;
		media[i] = (n1 + n2) / 2;
		printf("\n");
	}
	printf("Qual o aluno que quer ver os dados: ");
	scanf(" %d", &x);
	printf("\n");
	printf("matricula: %d\n", alunos[x-1].matricula);
	printf("nome: %s\n", alunos[x-1].nome);
	printf("nota 1: %.2f\n", alunos[x-1].nota1);
	printf("nota 2: %.2f\n", alunos[x-1].nota2);
	printf("media: %.2f\n", media[x-1]);
}
