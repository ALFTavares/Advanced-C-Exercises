#include <stdio.h>

void nums();
void tracos();

void main()
{
	int tabela[10][10] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
	int x;
	
	nums();
	tracos();
	
	for (int i = 0; i < 10; i++)
	{
		printf("%3d|", i);
		for (int j = 0; j < 10; j++)
		{
			tabela[i][j] = i * j; 
			printf("%3d", tabela[i][j]);
		}
		printf("\n");
	}
}

void nums()
{
	printf("    ");
	for (int i = 0; i < 10; i++)
		printf("%3d", i);
	printf("\n");
}

void tracos()
{
	int i;
	
	char score[34];	
	for (i = 0; i < 34; i++)
	{
		if (i < 3)
		{
			score[i] = ' ';
			printf("%c", score[i]);
		}
		else
		{
			score[i] = '-';
			printf("%c", score[i]);
		}
	}
	printf("\n");
}
