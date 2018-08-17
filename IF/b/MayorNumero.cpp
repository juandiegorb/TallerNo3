/*
*Programa: De 3 numero ver cual es mayor
*Fecha: 17 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	int valor1, valor2, valor3;
	printf("Ingrese el primer numero: ");
	scanf("%d", &valor1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &valor2);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &valor3);
	if((valor1 > valor2) && (valor1 > valor3)){
		printf("El mayor es: %d", valor1);
	}else if((valor2 > valor3) && (valor2 > valor1)){
		printf("El mayor es: %d", valor2);
	}else{
		printf("El mayor es: %d", valor3);
	}
	
	return 0;
}

