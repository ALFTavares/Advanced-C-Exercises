#include <stdio.h>

void main()
{
	int vector[5] = {12, 8, 11, 17, 15};
	int x=0;
	
	for (int i = 0; i < 5; i++)
	{
		if (vector[i] >= 14 && vector[i] <= 18)
			x++;
	}
	printf("Quantidades de notas entre 14 e 18 incluidas: %d\n", x);
}
