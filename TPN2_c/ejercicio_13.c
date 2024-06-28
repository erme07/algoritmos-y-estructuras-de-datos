/*
Enunciado

Dada las edades y estaturas de 6 alumnos. se pide determinar: la edad
promedio, la estatura promedio, la cantidad de alumnos mayores a 10 a�os y
la cantidad de alumnos que miden m�s de 1.40 mt.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int suma_edad = 0, cont_edad = 0;
    float suma_altura = 0, prom_edad, prom_altura;
    int cont_altura = 0;
    int edad;
    float altura;

    for (int i = 1; i <= 6; i++) {
        printf("Ingrese la edad del alumno %d: ", i);
        scanf("%d", &edad);
        suma_edad += edad;
        if (edad > 10) {
            cont_edad++;
        }

        printf("Ingrese la altura del alumno %d (en metros): ", i);
        scanf("%f", &altura);
        suma_altura += altura;
        if (altura > 1.40) {
            cont_altura++;
        }
    }

    prom_edad = (float)suma_edad / 6.0;
    prom_altura = suma_altura / 6.0;

    printf("El promedio de edad es: %.2f\n", prom_edad);
    printf("El promedio de altura es: %.2f\n", prom_altura);
    printf("Cantidad de alumnos mayores de 10 años: %d\n", cont_edad);
    printf("Cantidad de alumnos de mas de 1.40 mts de altura: %d\n", cont_altura);
    system("pause");
    return 0;
}