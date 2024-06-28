/*
Enunciado

Se realiza una encuesta entre 100 personas que votan por los candidatos a o b
se pide informar los porcentajes obtenidos por cada candidato.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int conta = 0, contb = 0;
  char voto;
  
  for (int i = 1; i <= 100; i++) {
    printf("Seleccione el candidato a o b: ");
    scanf(" %c", &voto);
    
    if (voto == 'a') {
      conta++;
    } else if (voto == 'b') {
      contb++;
    } else {
      printf("Ingrese una opcion valida\n");
    }
  }
  
  printf("Porcentaje candidato a: %.2f%%\n", (conta / 100.0) * 100);
  printf("Porcentaje candidato b: %.2f%%\n", (contb / 100.0) * 100);
  system("pause");
  return 0;
}