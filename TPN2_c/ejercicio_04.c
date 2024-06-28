/*
Enunciado

Dados la cantidad de varones y el de mujeres de un curso, calcular el total
de alumnos. si el total supera los 35 alumnos informar curso numeroso.
en caso contrario, calcular e informar lo que se debera pagar para realizar
una salida con todos, si cada alumno paga $55.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_h, num_m, total;

    printf("Ingrese la cantidad de varones: ");
    scanf("%d", &num_h);
    printf("Ingrese la cantidad de mujeres: ");
    scanf("%d", &num_m);

    total = num_h + num_m;

    if (total > 35) {
        printf("Curso numeroso\n");
    } else {
        printf("Para realizar una salida con todos se debe pagar: %d\n", total * 55);
    }
    system("pause");
    return 0;
}