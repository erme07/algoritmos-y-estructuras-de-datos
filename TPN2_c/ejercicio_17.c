/*
Enunciado

Desarrolle un algoritmo que le permita determinar de una lista de n�meros:
a. cuantos est�n entre el 50 y el 75, ambos inclusive.
b. cuantos son mayores de 80.
c. cuantos son menores de 30.
el algoritmo finaliza cuando se ingresa el n�mero 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int cont50_75 = 0, cont80 = 0, cont30 = 0, num;

  printf("Ingrese un numero (0 para terminar): ");
  scanf("%d", &num);

  while (num != 0) {
    if (num < 30) {
      cont30++;
    } else if (num > 80) {
      cont80++;
    } else if (num >= 50 && num <= 75) {
      cont50_75++;
    }

    printf("Ingrese un numero (0 para terminar): ");
    scanf("%d", &num);
  }

  printf("Cantidad de numeros mayores a 80: %d\n", cont80);
  printf("Cantidad de numeros menores a 30: %d\n", cont30);
  printf("Cantidad de numeros entre 50 y 75, incluidos: %d\n", cont50_75);
  system("pause");
  return 0;
}