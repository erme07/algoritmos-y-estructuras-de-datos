/*
Enunciado

Crear un programa que contenga una función llamada copiarvector() que reciba 
dos vectores y el tamaño de los mismos (deben ser del mismo tamaño) y que
consiga copiar en el segundo vector el contenido del primero.
*/

#include <stdio.h>
#include <stdlib.h>

void carga(int,int[]);
void copiarvector(int,int[],int[]);

int main(){
	int tam,i;
	do{
		printf("\n ingrese el tama%co de los vectores: ",164);
		scanf("%d",&tam);
		if(tam<=0)
			printf("\n ERROR, el tamaño debe ser mayor a cero\n\n");
	}while(tam<=0);
	
	int vec1[tam],vec2[tam];
	
	carga(tam,vec1);
	copiarvector(tam,vec1,vec2);
	
	printf("\n Vector 2 copia: ");
	for(i=0;i<tam;i++)
		printf("[%d]",vec2[i]);
	printf("\n\n ");
	
	system("pause");
	return 0;
}

void carga(int tam,int vec[]){
	int i;
	printf("\n Cargar vector 1\n\n");
	for(i=0;i<tam;i++){
		printf(" Ingrese el valor para la posicion [%d]: ",i);
		scanf("%d",&vec[i]);
	}
}

void copiarvector(int tam,int vec1[],int vec2[]){
	int i;
	for(i=0;i<tam;i++)
		vec2[i] = vec1[i];
}

