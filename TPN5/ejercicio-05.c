/*
Enunciado

Escribir un programa en c que permita realizar la carga de un vector
desde la función carga(), y luego mostrar cual es el mayor numero del
vector, utilizando para encontrarlo la función encontrarmax(), que
no deberá devolver ningún valor. el valor maximo debera ser
informado en el cuerpo principal
*/

#include <stdio.h>
#include <stdlib.h>

#define N 6

void carga(int[]);
void encontrarmax(int[],int*);

int main(){
	int i,vector[N],max;
	
	carga(vector);
	encontrarmax(vector,&max);
	
	printf("\n El valor maximo es: %d\n\n ",max);
	
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

void encontrarmax(int vec[],int* max){
	int i;
	*max=vec[0];
	for(i=0;i<N;i++){
		if(vec[i] > *max)
			*max = vec[i];
	}
}
