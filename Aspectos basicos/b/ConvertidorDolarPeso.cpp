/*
*Programa: Solicitar cantidad en dolares y mostrar cuanto tiene en dolares
*Fecha: 16 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	float valorPeso, cantidadDolar, cantidadPeso;
	printf("Ingrese el valor de un dolar en pesos colombianos: ");
	scanf("%f", &valorPeso);
	printf("Ingrese cuantos dolares tiene: ");
	scanf("%f", &cantidadDolar);
	cantidadPeso = valorPeso * cantidadDolar;
	printf("Usted tiene: %0.2f Pesos", cantidadPeso);	
	return 0;
}

