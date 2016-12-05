#include <stdio.h>

float fahrenheit(float celcius);

void main()
{
	float f, c;
	
	printf("Introduza o valor em Celcius: ");
	scanf("%f", &c);
	
	f = fahrenheit(c);
	
	printf("O valor em Fahrenheit é: %.2f\n", f);
}

float fahrenheit(float celcius)
{
	float f;
	
	f = (celcius * 9 / 5 + 32);
	
	return f;
}
