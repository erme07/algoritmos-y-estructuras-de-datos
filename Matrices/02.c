/*
Enunciado

Cargar una matriz de n*n de números enteros y mostrar:

	a) El doble de cada elemento de la matriz
	b) El promedio de los elementos de las dos diagonales (principal y secundaria)
	c) Multiplicar la matriz por su transpuesta.
	d) Determinar cuántos números primos hay en la matriz.
	
*/

#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int N,int[N][N]);
void mostrarMatriz(int N,int[N][N]);
char menu(void);
void dobleElementMatriz(int N,int[N][N]);
void promDiagonales(int N, int[N][N]);
void multPorTranspuesta(int N,int[N][N]);
int esprimo(int);
void cantidadNumPrimos(int N,int[N][N]);

int main(){
	int N;
	char opcion;
	
	printf("\n Ingrese el tama%co de la matriz cuadrada: ",164);
	scanf("%d",&N);
	int matriz[N][N];
	
	cargarMatriz(N,matriz);
	do{
		opcion = menu();
		system("cls");
		if(opcion!='e')
			mostrarMatriz(N,matriz);
		switch(opcion){
			case 'a': dobleElementMatriz(N,matriz); break;			
			case 'b': promDiagonales(N,matriz); break;
			case 'c': multPorTranspuesta(N,matriz); break;
			case 'd': cantidadNumPrimos(N,matriz); break;
		}
		if(opcion!='e')
			system("pause");		
	}while(opcion!='e');
	return 0;
}


void cargarMatriz(int N,int matriz[N][N]){
	int i,j;
	printf("\n Cargar matriz\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" Ingrese un numero para la posicion [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
}

void mostrarMatriz(int N,int matriz[N][N]){
	int i,j;
	printf("\n Matriz %d X %d\n\n",N,N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" [%02d]",matriz[i][j]);
		}
		printf("\n");
	}
}

char menu(){
	char opc;
	system("cls");
	printf("\n Menu\n\n");
    printf(" [a] Doble de los elementos de la matriz\n");
    printf(" [b] Promedio de los elementos de las diagonales.\n");
    printf(" [c] Multiplicar la matriz por su transpuesta.\n");
    printf(" [d] Determinar cuantos numeros primos hay en la matriz.\n");
    printf(" [e] Salir.\n");
    do{
    	printf("\n Elija una opcion: ");
    	fflush(stdin);
    	scanf("%c",&opc);
    	if(opc<'a' || opc>'e')
    		printf("\n ERROR, opcion invalida!\n");
	}while(opc<'a' || opc>'e');
	return opc;
}

void dobleElementMatriz(int N,int matriz[N][N]){
	int i,j,doble[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			doble[i][j] = matriz[i][j] * 2;
	}
	printf("\n Matriz %d X %d (Doble)\n\n",N,N);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf(" [%02d]",doble[i][j]);
		printf("\n");
	}
	printf("\n ");
}

int esprimo(int num){
	int i,cont=0;
	if(num==1)
		return 0;
	for(i=2;i<num;i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}

void cantidadNumPrimos(int N,int matriz[N][N]){
	int i,j,cont=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(esprimo(matriz[i][j])==1)
				cont++;
		}	
	}
	printf("\n Cantidad de numeros primos: %d\n\n ",cont);
}

void promDiagonales(int N, int matriz[N][N]){
	int i,j,cont=0,suma=0;
	float prom;
	for(i=0;i<N;i++)
		suma+=matriz[i][N-1-i];
	for(i=0;i<N;i++)
		suma+=matriz[i][i];	
	prom = (float)suma/((float)N*2);
	printf("\n El promedio de las diagonales es: %.2f\n\n ",prom);
}

void multPorTranspuesta(int N,int matriz[N][N]){
	int i,j,transpuesta[N][N],mult[N][N],k,suma=0;
	//creo la matriz traspuesta
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			transpuesta[j][i] = matriz[i][j];
	}
	printf("\n Matriz Transpuesta\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf(" [%02d]",transpuesta[i][j]);
		printf("\n");
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++)
				suma += matriz[i][k]*transpuesta[k][j];
			mult[i][j] = suma;
			suma=0;	
		}
	}	
	printf("\n Resultante de Matriz X Transpuesta\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf(" [%03d]",mult[i][j]);
		printf("\n");
	}
	printf("\n ");
}


