/*
Enunciado

Dado un número verificar si es positivo, negativo o nulo.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Es positivo\n");
    else if (n < 0)
        printf("Es negativo\n");
    else
        printf("Es nulo\n");

    system("pause");
    return 0;
}