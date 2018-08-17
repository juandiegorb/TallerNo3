/*
*Programa: Calcular el area de un rectangulo
*Fecha: 16 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	float area, ladoA, ladoB;
	printf("Ingrese el lado 1 del rectangulo: ");
	scanf("%f", &ladoA);
	printf("Ingrese el lado 2 del rectangulo: ");
	scanf("%f", &ladoB);
	area = ladoA * ladoB;
	printf("El area del rectangulo es: %0.2f", area);
	return 0;
}

