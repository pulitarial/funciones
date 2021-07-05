#include <stdio.h>

float cuenta (int numero_ingresado){
	float resultado=  (2 + numero_ingresado)/3;
	return resultado;
}

int main ( ){
	float respuesta = 0;
	int numero= 2;

	respuesta= cuenta(numero);
	printf("El resultado de 2 mas %i divido 3 es %.1f\n", numero, respuesta);
	


	return 0;
}