/*
Enunciado

Desarrolle un algoritmo que permita determinar el �rea y volumen de un
cilindro dado su radio y su altura.
*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926

int main() {
  int altura,radio;
  float area, volumen;

  printf(" Area y volumen del cilindro\n");
  printf(" Ingrese la altura: ");
  scanf("%d", &altura);
  printf(" Ingrese el radio: ");
  scanf("%d", &radio);

  area = (2 * PI * (float)radio * (float)altura) + (2 * PI * (float)radio * (float)radio);
  volumen = PI * (float)radio * (float)radio * (float)altura;

  printf(" Area del cilindro: %f\n", area);
  printf(" Volumen del cilindro: %f\n\n ", volumen);
  system("pause");
  return 0;
}