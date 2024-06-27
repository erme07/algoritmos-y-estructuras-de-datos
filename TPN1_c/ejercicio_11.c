/*
Enunciado

Desarrollar un diagrama de flujo para que se ingrese una temperatura en
grados centigrados y luego pasarla a grados kelvin y a grados fahrenheit.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float centig, farenh, kelvin;

    printf(" Ingrese una temperatura en grados centigrados: ");
    scanf("%f", &centig);

    farenh = (centig * 1.8) + 32;
    kelvin = centig + 273.15;

    printf(" Grados Fahrenheit: %.2f\n", farenh);
    printf(" Grados Kelvin: %.2f\n\n ", kelvin);

    system("pause");
    return 0;
}