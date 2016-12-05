#include <stdio.h>

void main()
{
	int vector[5] = {5, 10, 2, 4, 1};
	int result;
	
	result = vector[0];
	
	for (int i = 0; i < 5; i++)
	{
		if (result > vector[i])
			result = vector[i];
	}
	printf("O menor numero dentro do array é %d\n", result);
}
