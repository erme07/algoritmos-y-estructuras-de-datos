/*
Enunciado

Ingresar c�digo de articulo y precio, hasta un c�digo de articulo igual 0,
determinar el c�digo de articulo del precio m�s caro y el de menor precio.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int codigo, min_codigo, max_codigo, flag = 0;
  float precio, min = 0, max = 0;

  printf("Ingresar codigo de articulo (0 para terminar): ");
  scanf("%d", &codigo);

  while (codigo != 0) {
    printf("Ingrese el precio: ");
    scanf("%f", &precio);

    if (flag == 0) {
      min = precio;
      max = precio;
      min_codigo = codigo;
      max_codigo = codigo;
      flag = 1;
    } else {
      if (precio < min) {
        min = precio;
        min_codigo = codigo;
      }
      if (precio > max) {
        max = precio;
        max_codigo = codigo;
      }
    }

    printf("Ingresar codigo de articulo (0 para terminar): ");
    scanf("%d", &codigo);
  }

  if (flag != 0) {
    printf("Codigo de articulo con precio mas bajo: %d, Precio: %.2f\n", min_codigo, min);
    printf("Codigo de articulo con precio mas alto: %d, Precio: %.2f\n", max_codigo, max);
  } else {
    printf("No se ingresaron datos.\n");
  }
  system("pause");
  return 0;
}