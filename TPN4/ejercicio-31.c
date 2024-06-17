/*
Enunciado

Dado un vector de 10 elementos ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, escribir un programa en C 
(haciendo uso de puntero) que muestre las direcciones de memoria de cada elemento del vector.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int vector[]={1, 2, 3, 4, 4, 7, 8, 9, 5, 4},i;
	int* p = vector;
	
	for(i=0;i<10;i++){
		printf("\n Direccion de la posicion [%d]: %p",i,p+i);	
	}
	printf("\n");
	
	//alternativa usando la dualidad vector/puntero
	for(i=0;i<10;i++){
		printf("\n Direccion de la posicion [%d]: %p",i,vector+i);	
	}
	system("pause");
	return 0;
}

