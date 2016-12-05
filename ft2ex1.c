#include <stdio.h>

float val_bruto(float valor);

void main()
{
	float bruto, final[3];
	
	for (int i = 0; i < 3; i++)
	{
		printf("Insira o valor bruto do %dº empregado: ", (i+1));
		scanf("%f", &bruto);
		final[i] = val_bruto(bruto);
		printf("Valor Liquido = %.2f\n", final[i]);
	}
}

float val_bruto(float valor)
{
	float ss, irs, final;
	
	if (valor < 500)
		irs = 0;
	else if (valor < 1000)
		irs = valor * 0.12;
	else if (valor < 1500)
		irs = valor * 0.15;
	else
		irs = valor * 0.18;
		
	final = valor - ss - irs;
	
	return final;
}
