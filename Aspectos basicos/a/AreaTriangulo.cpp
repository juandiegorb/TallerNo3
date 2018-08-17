/*
*Programa: Escriba un programa que calcule el área de un triángulo
*Fecha: 16 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	float area, base, altura;
	
	printf("Ingrese la base del triangulo: ");
	scanf("%f", &base);
	printf("Ingrese la altura del triangulo: ");
	scanf("%f", &altura);
	area = (base * altura)/ 2;
	printf("El area del triangulo es: %0.2f", area);
	
	return 0;
}

