/*
Enunciado

Dada la nota y el legajo de un alumno. informar el legajo y si la nota es superior a 6.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int legajo, nota;

    printf(" Ingrese el legajo del alumno: ");
    scanf("%d", &legajo);
    printf(" Ingrese la nota: ");
    scanf("%d", &nota);

    printf(" Legajo numero: %d\n", legajo);

    if (nota > 6) 
        printf(" La nota es superior a 6\n\n ");
    else 
        printf(" La nota no supera el 6\n\n ");
    
    system("pause");
    return 0;
}