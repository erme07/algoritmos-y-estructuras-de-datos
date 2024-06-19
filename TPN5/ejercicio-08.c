/*
Enunciado

Realizar una función llamada ultimaletra, que toma una cadena de
hasta 10 caracteres como parámetro, y devuelve el último carácter.
*/

#include <stdio.h>
#include <stdlib.h>

#define N 11 // si se cuenta el caracter '\0' son 11 espacios en la cadena

char ultimaletra(char[]);

int main(){
	char cadena[N],ultletra;
	printf("\n Ingrese una cadena de 10 caracteres como maximo: ");
	fflush(stdin);
	scanf("%10s",cadena);
	
	ultletra = ultimaletra(cadena);
	
	printf("\n Ultima letra: '%c'\n\n ",ultletra);
	system("pause");
	return 0;
}

char ultimaletra(char cad[]){
	int i;
	char letra;
	for(i=0;i<N;i++){
		if(cad[i]=='\0'){
			letra = cad[i-1];
			break;
		}	
	}
	return letra;
}
