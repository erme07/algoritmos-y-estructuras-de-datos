/*
PARTE TEORICA

Si en la definición de una función utilizo un parámetro tipo puntero a char, cuando invoco a la
función, a ese parámetro puedo pasarle como argumento la dirección de una variable simple char o
la dirección del primer elemento de un vector de caracteres. [VERDADERO]

Si declaramos un tipo de dato arreglo, las posiciones de memoria que ocupan sus elementos son
contiguas. [VERDADERO]

Una variable tipo static puede ser utilizada en una función, inicializada con un valor y no puede ser
modificada. [FALSO]


Que imprime el siguiente codigo C:

#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j, mat[3][3]={0};
mat[0][0]=0;
mat[0][1]=1;
mat[0][2]=2;
mat[1][0]=0;
mat[1][1]=1;
mat[1][2]=2;
mat[2][0]=0;
mat[2][1]=1;
mat[2][2]=2;
for (i=0;i<3;i++) printf("%d",mat[i][i]);
printf("\n");
system("PAUSE");
}

EL CODIGO IMPRIME:  012

EL CICLO FOR SOLO IMPRIME TRES POSICIONES DE LA MATRIZ mat[0][0]=0, mat[1][1]=1 y mat[2][2]=2;
*/

//Ejercicio 1

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){

	int matrizgoles[N][N]={0}; //los partidos son las columnas - camisetas las filas - goles el contenido
	int camiseta,partido,goles;
	int i,j,cont=0;
	char respuesta;
	
	do{
		system("cls");
		printf("\n Ingrese el numero de camiseta: ");
		scanf("%d",&camiseta);
		printf(" Ingrese el numero de partido: ");
		scanf("%d",&partido);
		printf(" Ingrese la cantidad de goles: ");
		scanf("%d",&goles);
		
		matrizgoles[camiseta-1][partido-1] += goles;
		
		printf("\n Seguir ingresando datos? s/n: ");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta =='s');
	system("cls");
	printf("\n CANTIDAD DE GOLES POR CAMISETA Y PARTIDO\n\n");
	printf("\n Partido\t1\t2\t3\t4\t5\tTotal Goles\n\n");
	for(i=0;i<N;i++){
		printf(" Cam. %d\t\t",i+1);
		for(j=0;j<N;j++){
			printf("%d\t",matrizgoles[i][j]);
			cont += matrizgoles[i][j];
		}
		printf("%d\n",cont++);
		cont=0;
	}
	printf("\n\n ");
	system("pause");
	return 0;
}


