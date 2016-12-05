#include <stdio.h>

float val_bruto(float valor);

void main()
{
	float bruto, final;
		printf("Insira o valor bruto: ");
		scanf("%f", &bruto);
		
		final = val_bruto(bruto);
		
		printf("Valor Liquido = %.2f\n", final);
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
