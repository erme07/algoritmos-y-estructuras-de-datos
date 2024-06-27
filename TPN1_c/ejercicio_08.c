/*
Enunciado

Escribir un algoritmo que pida una cantidad en pesos argentinos y la convierta 
en dolares estadounidenses (1 dolar estadounidense = 15.40 pesos argentinos).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float importe, dolares;

    printf(" Importe en pesos Argentinos: ");
    scanf("%f", &importe);

    dolares = importe / 15.40;

    printf(" Importe en dolares: %.2f\n\n ", dolares);

	system("pause");
	return 0;
}

