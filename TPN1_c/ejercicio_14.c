/*
Enunciado

Desarrolle un algoritmo para calcular el importe de una venta en un
supermercado. el usuario debe ingresar el nombre del producto, el precio por
unidad y el numero de unidades. el programa mostrara por pantalla el
nombre del producto, el numero de unidades vendidas y el precio total
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char nombre[30];
  float precio_unidad,total;
  int unidades;

  printf(" Ingrese el nombre del producto: ");
  scanf("%29s", nombre); // Lee hasta 29 caracteres para dejar espacio para el carácter nulo final
  printf(" Ingrese el precio por unidad: ");
  scanf("%f", &precio_unidad);
  printf(" Ingrese el número de unidades vendidas: ");
  scanf("%d", &unidades);

  total = unidades * precio_unidad;

  printf("\n Nombre del producto: %s\n", nombre);
  printf(" Unidades vendidas: %d\n", unidades);
  printf(" Precio total: %.2f\n\n ", total);

  system("pause");
  return 0;
}