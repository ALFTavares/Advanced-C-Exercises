#include <stdio.h>

void main()
{
	int vector[6] = {5, 7, 8, 1, 4, 1};
	float result1=0, result2=0, result;
	
	for (int i = 0; i < 3; i++)
	{
		result1 = result1 + (vector[i] * vector[i+3]);
	}
	for (int j = 3; j < 6; j++)
		{
			result2 = result2+vector[j];
		}
	result = result1 / result2;
	printf("%.2f\n", result);
}
