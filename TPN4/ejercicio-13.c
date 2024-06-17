/*
Enunciado

Diseñar un programa que permita responder a las preguntas ¿Cuál es su nombre? Y
¿Qué edad tiene? Mostrar el resultado en pantalla (para almacenar el nombre debe
utilizar un arreglo de tipo char p/ej.: char arraynombre[13] y usar scanf(“%s”,
arraynombre ).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int edad;
	char nombre[13];
	
	printf(" %cCual es su nombre? ",168);
	scanf("%s",nombre);
	printf(" %cQue edad tiene? ",168);
	scanf("%d",&edad);
	
	printf("\n Nombre: %s\t\tEdad: %d\n\n ",nombre,edad);
	system("pause");
	return 0;
}

