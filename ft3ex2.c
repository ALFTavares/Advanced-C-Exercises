#include <stdio.h>

void main()
{
	float vector[4] = {7.6, 10.5, 3.4, 2.3};
	float result=0.0;
	
	for (int i = 0; i < 4; i++)
	{
		result = result + vector[i];
	}
	printf("Total = %.1f\n", result);
}
