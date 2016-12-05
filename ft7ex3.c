#include <stdio.h>

void main()
{
	int km;
	float consumo = 0;
	char  carro;
	
	printf("Qual o seu tipo de carro\nA = 8km/litro\nB = 9km/Litro\nC = 12km/Litro\n");
	scanf("%c", &carro);
		
	switch (carro)
	{
		case 'a': carro = 'A';
		case 'A': consumo = 8; break;
		case 'b': carro = 'B';
		case 'B': consumo = 9; break;
		case 'c': carro = 'C';
		case 'C': consumo = 12; break;
		default: printf("Carro errado\n"); break;
	}
	if (carro == 'A' || carro == 'B' || carro == 'C')
	{
		printf("Quanto km vai conduzir: "); scanf(" %d", &km);
		printf("Com o carro %c vai percorrer %d km e gastar %.2f Litros\n", carro, km, (km/consumo));
	}
}
