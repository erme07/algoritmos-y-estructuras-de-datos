/*
Enunciado

Escribir un programa que imprima por pantalla 30 l�neas de asteriscos
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 1; i <= 30; i++) {
        printf("%d ********\n", i);
    }
    system("pause");
    return 0;
}