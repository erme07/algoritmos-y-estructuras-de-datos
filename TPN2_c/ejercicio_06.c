/*
Enunciado

Desarrolle un algoritmo que permita leer un valor cualquier n y determine
si dicho número es par o impar.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }
    system("pause");
    return 0;
}