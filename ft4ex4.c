#include <stdio.h>

void main()
{
	int vector[6] = {7, 12, 8, 14, 5, 9};
	int x=0;
	
	for (int i = 0; i < 6; i++)
	{
		if (vector[i] >= 10)
			x++;
	}
	printf("%d são maiores ou iguais a 10\n", x);
}
