#include <stdio.h>

void main()
{
	int t, i, m[3][4];
	
	for (t = 0; t < 3; ++t)
		for (i = 0; i < 4; ++i)
			m[t][i] = (t*4)+i+1;
			
	for (t = 0; t < 3; ++t)
	{
		for (i = 0; i < 4; ++i)
			printf("%3i", m[t][i]);
		printf("\n");
	}
}
