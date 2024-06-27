/*
Enunciado

Escribir un programa que calcule la potencia de un número introduciendo
el número base y el exponente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int base, expo, potencia = 1;
    int i;

    printf(" Calculo de potencias\n\n");
    printf(" Ingrese la base: ");
    scanf("%d", &base);
    printf(" Ingrese el exponente: ");
    scanf("%d", &expo);

    for (i = 0; i < expo; i++) {
        potencia *= base;
    }

    printf(" Potencia: %d\n\n ", potencia);
	system("pause");
	return 0;
}

