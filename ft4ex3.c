#include <stdio.h>

void main()
{
	float vector[5] = {12.4, 13, 12, 14.5, 12.1};
	int x, y, z;
	
	x = y = z = 0;
	
	for (int i = 0; i < 5; i++)
	{
		if (vector[i] == 11)
			x++;
		else if (vector[i] == 12)
			y++;
		else if (vector[i] == 13)
			z++;
	}
	printf("%d são 11\n%d são 12\n%d são 13\n", x, y, z);
}
