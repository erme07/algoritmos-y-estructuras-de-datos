/*
Enunciado

Diseñar un programa que ingrese dos matrices cuadradas y muestre un menú donde
se puedan seleccionar estas distintas opciones:

	1-sumar matrices
	2-multiplicar matrices 
	3-salir del programa
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int dim,option,sum=0;
	int i,j,k;
	
	printf("\n Ingrese la longitud de las matrices cuadradas: ");
	scanf("%d",&dim);
	
	int mat[dim][dim],mat2[dim][dim],suma[dim][dim],mult[dim][dim];
	
	printf("\n Primer Matriz\n\n");
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n Segunda Matriz\n\n");
	for(i=0;i<dim;i++){
		for(j=0;j<dim;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
	do{
		system("cls");
		printf("\n Matriz 1\n\n");
		for(i=0;i<dim;i++){
			printf(" ");
			for(j=0;j<dim;j++)
				printf("[%d]",mat[i][j]);
			printf("\n");
		}
		
		printf("\n Matriz 2\n\n");
		for(i=0;i<dim;i++){
			printf(" ");
			for(j=0;j<dim;j++)
				printf("[%d]",mat2[i][j]);
			printf("\n");
		}
	
		printf("\n\n Opciones\n");
		printf("\n [1] Sumar matrices\n [2] Multiplicar matrices\n [3] Salir\n");
		printf("\n Seleccione una opcion: ");
		scanf("%d",&option);
		if(option<1 || option>3)
			printf("\n Error, opcion inexistente\n");
		
		if(option==1){
			for(i=0;i<dim;i++){
				for(j=0;j<dim;j++)
					suma[i][j] = mat[i][j] + mat2[i][j];	
			}
			printf("\n Matriz suma\n\n");
			for(i=0;i<dim;i++){
				printf(" ");
				for(j=0;j<dim;j++)
					printf("[%d]",suma[i][j]);
				printf("\n");
			}
			printf("\n");
			system("pause");
		}
		if(option==2){
			
			for(k=0;k<dim;k++){
				for(i=0;i<dim;i++){
					sum=0;
					for(j=0;j<dim;j++){
						sum += mat[i][j] * mat2[j][k];
					}
					mult[i][k] = sum;
				}	
			}
			printf("\n Matriz multiplicacion\n\n");
			for(i=0;i<dim;i++){
				printf(" ");
				for(j=0;j<dim;j++)
					printf("[%d]",mult[i][j]);
				printf("\n");
			}
			printf("\n");
			system("pause");
		}
	}while(option!=3);
}


