/*
Enunciado

Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. 
A continuación, el programa debe pedir el número de una fila. 
El programa deberá devolver el máximo de esa fila
*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
	int matriz[N][N],fila;
	int i,j,max;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	do{
		printf("\n Ingrese el numero de fila: ");
		scanf("%d",&fila);
		if(fila<0 || fila>=N)
			printf("\n ERROR, ingrese un numero de fila correcto\n\n");
	}while(fila<0 || fila>=N);
	
	max=matriz[fila][0];
	for(i=0;i<N;i++){
		if(matriz[fila][i]>max)
			max=matriz[fila][i];
	}
	printf("\n El maximo de la fila %d es: %d\n\n ",fila,max);
	system("pause");
	return 0;
}

