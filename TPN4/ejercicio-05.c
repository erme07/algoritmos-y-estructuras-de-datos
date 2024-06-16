/*
Enunciado

Escribir un programa que lea 10 números por teclado y los cargue en un vector. Luego
lea un número más e indique si está entre los anteriores.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
	int vector[N],i,num,flag=0,pos;
	
	for(i=0;i<N;i++){
		printf(" Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	printf("\n Ingrese el numero a buscar en el vector: ");
	scanf("%d",&num);
	for(i=0;i<N;i++){
		if(num == vector[i]){
			printf("\n El numero esta en el vector, en la posicion [%d]\n\n ",i);
			system("pause");
			return 0;
		}	
	}
	printf("\n El numero no se encuentra en el vector\n\n ");
	system("pause");
	return 0;	
}

