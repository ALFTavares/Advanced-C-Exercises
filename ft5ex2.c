#include <stdio.h>

void main()
{
	float vector[3][5] = {{8.0, 7.5, 8.5, 9.0, 8.0}, {8.9, 9.0, 8.6, 8.4, 8.0}, {6.8, 7.1, 7.0, 7.6, 6.5}};
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
				printf("%.1f ", vector[i][j]);
		printf("\n");
	}
}
