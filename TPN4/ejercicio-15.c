/*
Enunciado

Escribir un programa que lea una matriz de números enteros y que devuelva la suma
de los elementos positivos de la matriz y la suma de los elementos negativos.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
	int matriz[N][N];
	int i,j,sumapos=0,sumaneg=0;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(matriz[i][j]>0)
				sumapos+=matriz[i][j];
			else
				sumaneg+=matriz[i][j];
		}
	}
	
	printf("\n La suma de los numerso psitivos es: %d\n",sumapos);
	printf(" La suma de los numeros negativos es: %d\n\n ",sumaneg);
	system("pause");
	return 0;
}

