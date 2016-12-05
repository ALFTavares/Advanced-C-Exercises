#include <stdio.h>

float valor_auto(float base);

void main()
{
	float valorbase, valorfinal;
	
	printf("Insira o valor base do automovel: ");
	scanf("%f", &valorbase);
	
	valorfinal = valor_auto(valorbase);
	
	printf("Valor final do auto: %.2f\n", valorfinal);
}

float valor_auto(float base)
{
	float imposto, revenda, final;
	
	imposto = base * 0.45;
	revenda = base * 0.28;
	final = base + imposto + revenda;
	
	return final;
}
