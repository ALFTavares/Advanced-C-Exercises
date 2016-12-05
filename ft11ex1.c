#include <stdio.h>

typedef struct
{
	char nome[50];
	char endereco[100];
	unsigned int telefone;
} Pessoa;

void main()
{
	int x = 0;
	unsigned int num;
	char sim_nao, sair;
	
	Pessoa pessoas[x];
	
	do
	{
		printf("quer inserir alguem?(s/n)\n");
		scanf(" %c", &sim_nao);
		case 's': sim_nao = 'S';
		case 'S':
		{
			x++;
			printf("Insira o nome: ");
			scanf(" %[^\n]s", pessoas[x].nome);
			printf("Insira o Endereço: ");
			scanf(" %[^\n]s", pessoas[x].endereco);
			printf("Introduza o numero de telefone: ");
			scanf(" %d", &pessoas[x].telefone);
			break;
		}
		case 'n': sim_nao = 'N';
		case 'N': break;
		default: printf("valor errado!!!\n");
	} while (sim_nao != 'N');
	
	do
	{
		printf("Quer procurar alguem?");
		scanf(" %c", &sair);
		case 's': sair = 'S';
		case 'S':
		{
			printf("Qual o numero de telefone da pessoa?");
			scanf(" %u", num);
			for (int i = 1; i <= x; i++)
			{
				
			}
		}
	} while (sair = 'N');
}
