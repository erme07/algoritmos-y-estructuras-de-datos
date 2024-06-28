/*
Enunciado

Dada la cantidad de horas trabajadas, la antig�edad, y la categor�a del
empleado, y adem�s sabemos que cobra 650 pesos por cada a�o trabajado y
que el valor de la hora seg�n la categor�a es: 
cat 1= 100, cat 2= 200, cat 3=250, cat 4= 300.
a. determinar sueldo del empleado.
b. informar si el sueldo supera los 20000 pesos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas, antiguedad, categoria, sueldo;
    int valorcat = 0;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese los años de antiguedad: ");
    scanf("%d", &antiguedad);
    printf("Categorias\n");
    printf("[1] Categoria 1     [2] Categoria 2     [3] Categoria 3     [4] Categoria 4\n");
    printf("Ingrese la categoria: ");
    scanf("%d", &categoria);

    switch (categoria) {
        case 1:
            valorcat = 100;
            break;
        case 2:
            valorcat = 200;
            break;
        case 3:
            valorcat = 250;
            break;
        case 4:
            valorcat = 300;
            break;
        default:
            printf("Categoria inexistente\n");
            return 1; // Termina el programa si la categoria es inexistente
    }

    sueldo = antiguedad * 650 + horas * valorcat;

    if (sueldo > 20000) {
        printf("El sueldo supera los $20000\n");
    }

    printf("El sueldo es: $%d\n", sueldo);
    system("pause");
    return 0;
}