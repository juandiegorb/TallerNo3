/*
*Programa: Mostrar el dia de la semana 
*Fecha: 17 de Agosto del 2018
*Elaborado por: Juan Diego Rios Ballesteros
*/
#include <iostream>
#include <stdio.h>

using namespace std;

//función principal	
int main(int argc, char *argv[]) {
	int seleccion;
	printf("Ingrese un numero de 1 a 7 para ver el dia de la semana: ");
	scanf("%d", &seleccion);
	if(seleccion == 1){
		printf("Domingo");
	}else if(seleccion == 2){
		printf("Lunes");
	}else if(seleccion == 3){
		printf("Martes");
	}else if(seleccion == 4){
		printf("Miercoles");
	}else if(seleccion == 5){
		printf("Jueves");
	}else if(seleccion == 6){
		printf("Viernes");
	}else if(seleccion == 7){
		printf("Sabado");
	}else{
		printf("Ese dia no existe");
	}	
	return 0;
}

