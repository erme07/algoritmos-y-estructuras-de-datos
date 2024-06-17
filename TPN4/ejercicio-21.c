/*
Enunciado

El siguiente programa contiene errores, corrígelo:

#define <stdio.h>
#define <stdlib.h>
#include Tope 10;

main(){
	int tabla [tope], i, aux;
	for (i=0; i<Tope; i++){
		tabla[i]=i;
		i=i+1;
	}
	i=0;
	while (i<=Tope){
		aux=tau[i];
		tabla[i]=tabla[i+1];
		tabla[i+1]=aux;
	}
	printf("\n\n");
	system ("PAUSE");
}

*/

#include <stdio.h>
#include <stdlib.h>
#define Tope 10 //primer error, se puso "include" en lugar de "define" y se cerró con ";"

int main(){
	int tabla [Tope], i, aux; //segundo error, se declaró el vector "tabla[tope]" cuando deberia ser "tabla[Tope]"
	for (i=0; i<Tope; i++){
		tabla[i]=i;
		//i=i+1;    //no hace falta incrementar la i, lo hace el for automaticamente
	}
	i=0;
	while (i<Tope-1){ //modifico la condicion, para no pasarse de las posiciones del vector
		aux=tabla[i]; //se usó un vector inexistente "tau[]"
		tabla[i]=tabla[i+1];
		tabla[i+1]=aux;
		i=i+1; //faltaba incrementar el valor de i, para no crear un bucle infinito
	}
	
	for(i=0;i<Tope;i++) //agrego un bucle para mostrar el vector
		printf("%d ",tabla[i]);
	printf("\n\n");
	system ("PAUSE");
	return 0;
}

