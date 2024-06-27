/*
Enunciado

Ingresar tres valores ambientales de temperaturas y calcular e
informar la suma y el promedio de dichos valores.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float temp1, temp2, temp3, suma, promedio;

    printf(" Ingresar la primer temperatura: ");
    scanf("%f", &temp1);
    printf(" Ingresar la segunda temperatura: ");
    scanf("%f", &temp2);
    printf(" Ingresar la tercera temperatura: ");
    scanf("%f", &temp3);

    suma = temp1 + temp2 + temp3;
    promedio = suma / 3;

    printf("\n La suma de temperaturas es: %.2f\n", suma);
    printf(" El promedio de temperaturas es: %.2f\n\n ", promedio);
    system("pause");
    return 0;
}