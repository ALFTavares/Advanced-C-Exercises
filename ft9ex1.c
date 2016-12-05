#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void funcaomenu();

const int x=3;

typedef struct
{
	char nome[50];
	int nif;
	float deposito;
} Conta;

void main()
{
	int i;
	int nib_conta;
	char c[0], menu, user[50];
	float depositar, levantar;
	Conta conta[x];
	for (i = 0; i < x; i++)
	{
		printf("Numero de cliente: %d\n", i+1);
		printf("Nome do cliente: ");
		scanf(" %[^\n]s", conta[i].nome);
		printf("Insira o seu NIF: ");
		scanf(" %d", &conta[i].nif);
		do
		{
			conta[i].deposito = 0.00;
			printf("Faça o seu primeiro deposito com um minimo de 100€: ");
			scanf(" %f", &conta[i].deposito);
			if (conta[i].deposito < 100)
				printf("\nDeposito insuficiente\n");
		} while (conta[i].deposito < 100);
		printf("\n");
	}
	printf("\n");
	
	do
	{
		funcaomenu();
		scanf(" %c", &menu);
	
		switch (menu)
		{
			case '1':
				{
					printf("Insira o seu numero de cliente: ");
					scanf(" %d", &i);
					i--;
					printf("Valor a depositar: ");
					scanf(" %f", &depositar);
					conta[i].deposito = conta[i].deposito + depositar;
					printf("\nCliente numero %d\n", i+1);
					printf("Nome %s\n", conta[i].nome);
					printf("Saldo actual: %.2f\n", conta[i].deposito);
					break;
				}
			case '2':
			{
				printf("Insira o seu numero de cliente: ");
				scanf(" %d", &i);
				i--;
				printf("Valor a levantar: ");
				scanf(" %f", &levantar);
				if (levantar > conta[i].deposito)
					{printf("Não tem saldo suficiente!!"); break;}
				else
					conta[i].deposito = conta[i].deposito - levantar;
				printf("\nCliente numero %d\n", i+1);
				printf("Nome %s\n", conta[i].nome);
				printf("Saldo actual: %.2f\n", conta[i].deposito);
				break;
			}
			case '3':
			{
				printf("Insira o seu numero de cliente: ");
				scanf(" %d", &i);
				i--;
				printf("Nome: %s\n", conta[i].nome);
				printf("NIF: %d\n", conta[i].nif);
				printf("Saldo: %.2f\n", conta[i].deposito);
				break;
			}
			case '0': break;
			default: printf("Tente Outra Vez!!!\n"); break;
		}
	} while (menu != '0');
}

void funcaomenu()
{
	printf("\n\t************************\n");
	printf("\t*        MENU:         *\n");
	printf("\t*1- Deposito           *\n");
	printf("\t*2- Levantamento       *\n");
	printf("\t*3- Consultar Conta    *\n");
	printf("\t*0- Sair               *\n");
	printf("\t************************\n\n");
	printf("Insira a opção desejada: ");
}
