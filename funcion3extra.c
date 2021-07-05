#include <stdio.h>

float dolaresapesos (int dolares_1, int dolares_2){
	int usd_gastados_total= dolares_1 + dolares_2;
	float resultado= (usd_gastados_total + ((usd_gastados_total*65)/100))*95;
	return resultado;
}

int main ( ){
	int precio_usd_1=0;
	int precio_usd_2=0;
	int precio_ars=0;

	printf("Cuantos USD pago por la primera compra?\n");
	scanf("%i", &precio_usd_1);
	printf("Y por la segunda?\n");
	scanf("%i", &precio_usd_2);
	precio_ars = dolaresapesos (precio_usd_1, precio_usd_2);
	printf("Osea que con las retenciones sumadas usted abonara ars %i\n", precio_ars);
	

	return 0;
}