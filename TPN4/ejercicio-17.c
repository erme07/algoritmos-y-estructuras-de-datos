/*
Enunciado

Escribir un programa que lea del teclado una cadena y muestre en la pantalla la
cantidad de consonantes y de vocales que contiene. 
*/

#include <stdio.h>
#include <stdlib.h>

#define N 40

int main(){
	char cadena[N],l;
	int i,vocales=0,consonantes=0;
	
	printf(" Ingrese una cadena de texto (sin tildes ni dieresis): ");
	scanf("%s",cadena);
	
	for(i=0; i<N && cadena[i]!='\0';i++){
		l=cadena[i];
		if(l>='A' && l<='Z')
			l+=32; //convierto mayuscula a minuscula usando coidgo ascii
		if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u')
			vocales++;
		else if((l>='A' && l<='Z') || (l>='a' && l<='z'))
			consonantes++;
	}
	printf("\n Vocales: %d\t\tConsonates: %d\n\n ",vocales,consonantes);
	system("pause");
	return 0;
}

