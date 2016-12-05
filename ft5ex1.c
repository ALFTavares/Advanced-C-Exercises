#include <stdio.h>

void main()
{
	int vector[5][5];
	int i, j;
	
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			vector[i][j] = 0;
			j++;
		}
		i++;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j < 2; j++)
			printf("vector[%d][%d] = %d\n", i+1, j+1, vector[i][j]);
	}
	
}

