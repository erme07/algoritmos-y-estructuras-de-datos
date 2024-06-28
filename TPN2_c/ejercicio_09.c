/*
Enunciado

Dado los 3 lados de un triangulo determinar que tipo de triangulo es.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int l1, l2, l3;

  printf("Lados de un triangulo\n");
  printf("Ingrese el primer lado: ");
  scanf("%d", &l1);
  printf("Ingrese el segundo lado: ");
  scanf("%d", &l2);
  printf("Ingrese el tercer lado: ");
  scanf("%d", &l3);

  if (l1 == l2 && l2 == l3) {
    printf("Es un triangulo equilatero\n");
  } else if (l1 == l2 || l1 == l3 || l2 == l3) {
    printf("Es un triangulo isosceles\n");
  } else {
    printf("Es un triangulo escaleno\n");
  }
  system("pause");
  return 0;
}