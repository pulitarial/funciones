#include <stdio.h>

float cuenta (int numero_ingresado_1, int numero_ingresado_2){
	float resultado=  (2 - (numero_ingresado_2 * numero_ingresado_1))/numero_ingresado_2;
	return resultado;
}

int main ( ){
	float respuesta = 0;
	int numero_a= 2;
	int numero_b=20;

	respuesta= cuenta(numero_a, numero_b);
	printf("El resultado de la cuenta es %.1f\n", respuesta);
	


	return 0;
}