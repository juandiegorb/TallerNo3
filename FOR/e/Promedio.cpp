/*
*Programa: Promedio de 3 notas para n estudiantes
*Fecha: 21 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//función principal	
int main(int argc, char *argv[]) {
	//Variables
	float promedio, nota1, nota2, nota3;
	int i, n;
	
	printf("Ingrese cuantos estudiantes sacaran sus promedios: ");
	scanf("%d", &n);
	
	for(i = 1; i<= n; i++){
		printf("Ingrese la nota numero 1: ");
		scanf("%f", &nota1);
		printf("Ingrese la nota numero 2: ");
		scanf("%f", &nota2);
		printf("Ingrese la nota numero 3: ");
		scanf("%f", &nota3);
		
		promedio = (nota1 + nota2 + nota3)/3;
		printf("El promedio del estudiante numero %d es: %.2f\n", i, promedio);
		
	}
	return 0;
}

