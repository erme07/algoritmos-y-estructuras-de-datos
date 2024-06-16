/*
Enunciado

Rellene un array con los números pares comprendidos entre 1 y 100 y muéstrelos en
pantalla en orden ascendente
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 50

int main(){
	int vector[TAM],i,pos=0;
	printf("\n Numeros pares entre 1 y 100\n\n");
	for(i=2;i<100;i+=2){
		vector[pos]=i;
		pos++;
	}
	for(i=0;i<pos;i++)
		printf("%2d  ",vector[i]);
	printf("\n\n ");
	system("pause");
	return 0;
}

