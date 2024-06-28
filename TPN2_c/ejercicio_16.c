/*
Enunciado

Desarrolle un diagrama de flujo que permita calcular el promedio de las
notas de un curso. el algoritmo termina cuando se ingresa la nota 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int suma_nota = 0, cont = 0;
  float nota, prom_nota;

  printf("Ingrese la nota del alumno: ");
  scanf("%f", &nota);

  while (nota != 0) {
    cont++;
    suma_nota += nota;
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &nota);
  }

  if (cont > 0) {
    prom_nota = (float)suma_nota / cont;
    printf("El promedio de las notas del curso es: %.2f\n", prom_nota);
  } else {
    printf("No se ingresaron notas.\n");
  }
  system("pause");
  return 0;
}