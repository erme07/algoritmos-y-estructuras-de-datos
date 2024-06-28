/*
Enunciado

mostrar los n�meros del 5 al 60 incrementando de 5 en 5
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 5; i <= 60; i += 5) {
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}