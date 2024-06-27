/*
Enunciado

Escribir un algoritmo que pida, nombre, apellido, teléfono y edad de una
persona y luego lo muestre por pantalla
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char nombre[20],apellido[20];
	int edad,telefono;
	printf(" Ingrese el nombre: ");
	scanf("%s",nombre);
	printf(" Ingrese el apellido: ");
	scanf("%s",apellido);
	printf(" Ingrese el telefono: ");
	scanf("%d",&telefono);
	printf(" Ingrese la edad: ");
	scanf("%d",&edad);
	printf("\n Nombre: %s\n",nombre);
	printf(" Apellido: %s\n",apellido);
	printf(" Telefono: %d\n",telefono);
	printf(" Edad: %d\n\n ",edad);
	system("pause");
	return 0;
}

