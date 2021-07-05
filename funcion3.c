#include <stdio.h>

float dolaresapesos (int dolares){
	float resultado= (dolares + ((dolares*65)/100)) * 95;
	return resultado;
}

int main ( ){
	int precio_usd=0;
	int precio_ars=0;

	printf("Cuantos USD pago?\n");
	scanf("%i", &precio_usd);
	precio_ars = dolaresapesos (precio_usd);
	printf("Osea que con las retenciones sumadas usted abonara ars %i\n", precio_ars);
	

	return 0;
}