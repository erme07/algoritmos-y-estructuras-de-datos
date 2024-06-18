/*
Enunciado

Escribir un programa en c que permita realizar la carga de un vector
desde la función carga(), y luego muestre los valores imprimiéndolos
desde el cuerpo principal
*/

#include <stdio.h>
#include <stdlib.h>

#define N 4

void carga(int[]);

int main(){
	int vector[N],i;
	carga(vector);
	
	printf("\n Vector: ");
	for(i=0;i<N;i++)
		printf("[%d]",vector[i]);
	printf("\n\n ");
	
	system("pause");
	return 0;
}

void carga(int vec[]){
	int i;
	printf("\n Cargar vector\n\n");
	for(i=0;i<N;i++){
		printf(" Ingrese el valor para la posicion [%d]: ",i);
		scanf("%d",&vec[i]);
	}
}
