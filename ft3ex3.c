#include <stdio.h>

void main()
{
	int vector[4] = {7, 10, 2, 4};
	int result=0;
	
	for (int i = 0; i < 4; i++)
	{
		if (vector[i]%2 == 0)
			result = result+vector[i];
	}
	printf("Total = %d\n", result);
}
