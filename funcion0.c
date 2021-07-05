#include <stdio.h>

int suma (int primer_numero, int segundo_numero){
	return primer_numero + segundo_numero;
}

int main ( ){
	int resultado=0;
	int numero_a= 0;
	int numero_b= 0;

	printf("Ingrese los numeros que desea sumar:\nEl primero:\n");
	scanf("%i", &numero_a);
	printf("El segundo:\n");
	scanf("%i", &numero_b);

	resultado= suma (numero_a, numero_b);
	printf("El Resultado es %i\n",resultado );


	return 0;
}