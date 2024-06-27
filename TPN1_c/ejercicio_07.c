#include <stdio.h>
#include <stdlib.h>

int main(){
	int importe;
    float porcentaje;

    printf(" Ingresar importe en pesos: ");
    scanf("%d", &importe);

    porcentaje = (float)importe * 0.8;
    printf("\n El 80%%: %.2f\n", porcentaje);
   
    porcentaje = (float)importe * 0.2;
    printf(" El 20%%: %.2f\n", porcentaje);

    porcentaje = (float)importe * 0.15;
    printf(" El 15%%: %.2f\n\n ", porcentaje);
	system("pause");
	return 0;
}

