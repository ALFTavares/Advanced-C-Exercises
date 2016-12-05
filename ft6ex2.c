#include <stdio.h>

void main()
{
	float vector[3][5] = {{1.0, 7.5, 8.5, 9.0, 8.0}, {3.0, 9.0, 8.6, 8.4, 8.0}, {6.8, 7.1,7.0,7.6,6.5}};
	int cont2a4, cont6a8;
	
	cont2a4 = cont6a8 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (vector[i][j] >= 2 && vector[i][j] <= 4)
				cont2a4 = cont2a4 + 1;
			else if (vector[i][j] >= 6 && vector[i][j] <= 8)
				cont6a8 = cont6a8 + 1;
		}
	}
	printf("%d valores estão entre 2 a 4\n%d valores estão entre 6 a 8\n", cont2a4, cont6a8);
}
