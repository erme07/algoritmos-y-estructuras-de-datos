/*
Enunciado

Desarrolle un algoritmo que calcule la hipotenusa de un  
triangulo rectangulo conocidas las longitudes de sus catetos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float cat_ad, cat_op, hipo;

  printf(" Calculo de hipotenusa\n\n");
  printf(" Ingrese el cateto adyacente: ");
  scanf("%f", &cat_ad);
  printf(" Ingrese el cateto opuesto: ");
  scanf("%f", &cat_op);

  hipo = sqrt(pow(cat_ad, 2) + pow(cat_op, 2));

  printf(" La hipotenusa es: %.2f\n\n ", hipo);
  system("pause");
  return 0;
}