/*
Enunciado

En una olimpiada de tiro al blanco se llega a un acuerdo entre los
participantes para que el puntaje obtenido sea calculado en base al puntaje
original (0 a 10) alcanzado en el tiro efectuado, multiplicado por un factor
según la siguiente tabla:
    Puntaje original     Factor
    0   				 0
    de 1 a 5			 6
    de 6 a 8			 9
    de 9 a 10			 10
Para un tiro realizado determine el puntaje alcanzado aplicando el factor
que le corresponde.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int puntaje_original, factor, puntaje_final;

  printf("Ingrese el puntaje original: ");
  scanf("%d", &puntaje_original);

  if (puntaje_original == 0) {
    factor = 0;
  } else if (puntaje_original >= 1 && puntaje_original <= 5) {
    factor = 6;
  } else if (puntaje_original >= 6 && puntaje_original <= 8) {
    factor = 9;
  } else if (puntaje_original == 9 || puntaje_original == 10) {
    factor = 10;
  }

  puntaje_final = puntaje_original * factor;
  printf("Puntaje final: %d\n", puntaje_final);
  system("pause");
  return 0;
}