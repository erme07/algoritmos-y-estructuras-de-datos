/*
Enunciado

Dada una cantidad expresada en pies, y otra en metros. determinar la
suma pero convertida a pulgadas, a yardas, a metros y a millas por separado.
considere las siguientes equivalencias:
1 milla = 1609 metros, 1 pulgada = 0.0254 metros, 1 yarda = 3 pies, 1 pie = 12pulgadas.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, suma, suma_pulg, suma_yard, suma_mill;

    printf(" Escriba el primer valor en metros: ");
    scanf("%f", &num1);
    printf(" Escriba el segundo valor en pies: ");
    scanf("%f", &num2);

    num2 = num2 * 0.3048;
    suma = num1 + num2;

    suma_pulg = suma / 0.0254;
    suma_yard = suma / 0.9144;
    suma_mill = suma / 1609.344;

    printf("\n La suma en pulgadas es: %.2f\n", suma_pulg);
    printf(" La suma en yardas es: %.2f\n", suma_yard);
    printf(" La suma en metros es: %.2f\n", suma);
    printf(" La suma en millas es: %.2f\n\n ", suma_mill);
    system("pause");
    return 0;
}