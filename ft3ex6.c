#include <stdio.h>

void main()
{
	double result=0, myList[4] = {7.0033333, -10.222333, -2.33333, 4.5454545};
	
	for (int i = 0; i < 4; i++)
	{
		if (myList[i] > 0)
			result = result + myList[i];
	}
	printf("%.2f\n", result);
}
