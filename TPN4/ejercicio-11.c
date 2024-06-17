/*
Enunciado

Dado el vector T de tamaño n. Si el tamaño es par invertir los elementos de la mitad
de los elementos.
Ejemplo: v=[1][2][3][4][5][6] v(invertido)=[3][2][1][6][5][4]
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf(" Ingrese la longitud del arreglo: ");
	scanf("%d",&n);
	
	int t[n],ti[n],i;
	
	//cargo el vector con numeros
	for(i=0;i<n;i++)
		t[i]=i+1;
	printf("\n Vector\n\n ");
	
	for(i=0;i<n;i++)
		printf("%d ",t[i]);
		
	//verifico si el tamaño del vector es par, invierto el vector
	if(n%2 == 0){
		for(i=0;i<(n/2);i++)
			ti[i] = t[(n/2)-1-i];		
		for(i=0;i<(n/2);i++)
			ti[(n/2)+i] = t[n-1-i];
		printf("\n\n Vector invertido\n\n ");
		for(i=0;i<n;i++)
			printf("%d ",ti[i]);
	}
	
	printf("\n\n ");
	system("pause");
	return 0;
}

