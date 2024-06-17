/*
Enunciado

Escribir un programa que lea del teclado dos cadenas, las muestre en pantalla e
informe si las cadenas ingresadas son iguales o no. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

int main(){
	char cad1[N],cad2[N];
	
	printf("\n Ingrese la primer cadena: ");
	scanf("%s",cad1);
	printf(" Ingrese la segunda cadena: ");
	scanf("%s",cad2);
	system("cls");
	printf("\n Cadena 1: %s\n Cadena 2: %s\n\n",cad1,cad2);
	if(strcmp(cad1,cad2)==0)
		printf("\n Las cadenas son iguales\n\n ");
	else
		printf("\n Las cadenas son distintas\n\n ");
	system("pause");
	return 0;
}

