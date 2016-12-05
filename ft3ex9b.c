#include <stdio.h>

void main()
{
	int vector[6] = {5, 7, 8, 1, 4, 1};
	float result1=0, result2=0, result;
	
	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			result1 = result1 + (vector[i] * vector[i+3]);
		else
			result2 = result2+vector[i];
	}
	result = result1 / result2;
	printf("Duração Mais Provavel = %.2f\n", result);
}
