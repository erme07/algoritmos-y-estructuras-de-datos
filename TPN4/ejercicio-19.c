/*
Enunciado

Escribir un programa que ingrese una palabra y a continuación muestre la palabra y
la cantidad de letras que compone la palabra. 
*/

#include <stdio.h>
#include <stdlib.h>

#define N 30

int main(){
	char palabra[N],l,letras=0;
	int i;
	
	printf("\n Ingrese una palabra: ");
	scanf("%s",palabra);
	
	for(i=0; i<N && palabra[i]!='\0';i++){
		l = palabra[i];
		if((l>='A' && l<='Z') || (l>='a' && l<='z'))
			letras++;
	}
	
	printf("\n Palabra: %s",palabra);
	printf("\n Cantidad de letras: %d\n\n ",letras);
	system("pause");
	return 0;
}

