/*
Enunciado

Escribir un programa que lea una matriz de 4 filas y 3 columnas, la visualice por
pantalla y a continuación encuentre el mayor y el menor elemento de la matriz y sus
posiciones.
*/

#include <stdio.h>
#include <stdlib.h>

#define FILA 4
#define COL 3

int main(){
	
	int matriz[FILA][COL],max,posmaxf,posmaxc,min,posminf,posminc;
	int i,j;
	
	for (i=0;i<FILA;i++){
    	for (j=0;j<COL;j++){
    		printf(" Ingrese un numero para la posicion [%d][%d]: ", i,j);
    		scanf("%d",&matriz[i][j]);  
    	}
    }
    printf("\n Matriz\n\n ");
	for (i=0;i<FILA;i++){
		for (j=0;j<COL;j++)
			printf("[%d]\t", matriz[i][j]);
    	printf("\n ");
    }
    max = matriz[0][0];
    min = matriz[0][0];
    for (i=0;i<FILA;i++){
    	for (j=0;j<COL;j++){
    		if(matriz[i][j]>max){
    			max = matriz[i][j];
    			posmaxf = i;
    			posmaxc = j;
			}
    			
    		if(matriz[i][j]<min){
    			min = matriz[i][j];
    			posminf = i;
    			posminc = j;
			}	
    	}
    }
    
    printf("\n El mayor elemento es %d y la posicion es [%d][%d]\n\n",max,posmaxf,posmaxc);
    printf(" El menor elemento es %d y la posicion es [%d][%d]\n\n ",min,posminf,posminc);
    system("pause");
	return 0;
}

