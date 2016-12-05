#include <stdio.h>

float valorliq (float base);

void main()
{
	float valorbase, valor_liq;
	printf("Introduza o valor base: "); scanf("%f", &valorbase);

	valor_liq=valorliq(valorbase);
	
	printf("O valor liquido é %.2f\n", valor_liq);
}

float valorliq (float base)
{
	float liq, iva, irs;
	
	iva = base * 0.23;
	irs = base * 0.25;
	liq = base + iva - irs;
	
	return liq;
}
