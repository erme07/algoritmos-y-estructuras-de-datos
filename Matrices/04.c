/*
Enunciado

Considere la siguiente definición “Una matriz es rala si para cada columna y para
cada fila todos los elementos que almacenan son cero (0) excepto uno de ellos
que es igual a uno (1). Cree un programa que determine si una matriz es rala o no.
*/

#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int F,int C,int[F][C]);
void mostrarMatriz(int F,int C,int[F][C]);
int esRala(int F,int C,int[F][C]);

int main(){
	int COLS,FILAS;
	
	do{
		printf("\n Numero de columnas de la matriz: ");
		scanf("%d",&COLS);
		if(COLS<2)
			printf("\n ERROR, el valor minimo es 2\n\n");
	}while(COLS<2);
	do{
		printf("\n Numero de filas de la matriz: ");
		scanf("%d",&FILAS);
		if(FILAS<2)
			printf("\n ERROR, el valor minimo es 2\n\n");
	}while(FILAS<2);
	
	int matriz[FILAS][COLS];
	
	cargarMatriz(FILAS,COLS,matriz);
	
	system("cls");
	mostrarMatriz(FILAS,COLS,matriz);
	if(esRala(FILAS,COLS,matriz)==1)
		printf("\n La matriz es rala\n\n ");
	else
		printf("\n La matriz NO es rala\n\n ");
	
	system("pause");
	return 0;
}


void cargarMatriz(int F,int C,int matriz[F][C]){
	int i,j;
	printf("\n Cargar matriz\n\n");
	for(i=0;i<F;i++){
		for(j=0;j<C;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
}

void mostrarMatriz(int F,int C,int matriz[F][C]){
	int i,j;
	printf("\n Matriz %d X %d\n\n",F,C);
	for(i=0;i<F;i++){
		for(j=0;j<C;j++)
			printf(" [%02d]",matriz[i][j]);
		printf("\n");
	}
}

int esRala(int F,int C, int matriz[F][C]){
	int cont=0,i,j;
	for(i=0;i<F;i++){
		for(j=0;j<C;j++){
			if(matriz[i][j] != 1 && matriz[i][j] != 0)
				return 0;
			if(matriz[i][j] == 1)
				cont++;
		}
		if(cont>1)
			return 0;
		cont=0;
	}
	for(i=0;i<C;i++){
		for(j=0;j<F;j++){
			if(matriz[j][i] != 1 && matriz[j][i] != 0)
				return 0;
			if(matriz[j][i] == 1)
				cont++;
		}
		if(cont>1)
			return 0;
		cont=0;
	}
	return 1;
}
