#include <stdio.h>

float desconto(int q, float p);

void main()
{
	int quant;
	float preco, res;
	
	printf("Introduza a quantidade de items: ");
	scanf("%d", &quant);
	printf("Introduza o preco de cada item: ");
	scanf(" %f", &preco);
	
	res = desconto(quant, preco);
	
	printf("Total a pagar: %.2f\n", res);
}

float desconto(int q, float p)
{
	float desc, res;
	
	if (q < 11)
		desc = 0;
	else if (q < 21)
		desc = p * 0.10;
	else if (q < 51)
		desc = p * 0.20;
	else
		desc = p * 0.25;
		
	res = q * (p - desc);
	
	return res;
}
