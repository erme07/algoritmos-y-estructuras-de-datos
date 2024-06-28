/*
Enunciado

Escribir un algoritmo que solicite una nota e imprima por pantalla la
calificacion en formato "aprobú" o "no aprobú" según si la nota es mayor o
igual que 7 o menor que 7.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nota;

    printf("Ingrese la nota: ");
    scanf("%d", &nota);

    if (nota >= 7) {
        printf("aprobo\n");
    } else {
        printf("no aprobo\n");
    }
    system("pause");
    return 0;
}