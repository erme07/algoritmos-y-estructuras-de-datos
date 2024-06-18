/*
Enunciado

Realice un programa que dada una matiz de 3 X 3 encuentre el número máximo de
la misma y muestre su posición 
*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

void maximo(int[N][N],int*,int*,int*);

int main(){
	int matriz[N][N],max,i,j;
	int maxposI,maxposJ;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	maximo(matriz,&max,&maxposI,&maxposJ);
	printf("\n El numero maximo de la matriz es: %d\n",max);
	printf(" La posicion del numero maximo es [%d][%d]\n\n ",maxposI,maxposJ);
	system("pause");
	return 0;
}

void maximo(int m[N][N],int*max,int*maxI,int*maxJ){
	int i,j;
	*max = m[0][0];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(m[i][j]>*max){
				*max=m[i][j];
				*maxI=i;
				*maxJ=j;
			}		
		}
	}
}

