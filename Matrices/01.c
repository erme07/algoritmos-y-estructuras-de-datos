/*
Enunciado

Cargar una matriz de n*n de números enteros.

Mostrar:

	a) la sumatoria de los elementos de una fila, la misma será ingresada por el usuario (validar).
	b) el mayor elemento de la segunda columna.
	c) el promedio de todos los múltiplos de 5 en la matriz.
	d) la sumatoria de la diagonal principal de la matriz.
	e) el elemento mínimo de cada fila.
	f) los elementos de la diagonal secundaria.
	g) los elementos que se encuentran debajo de la diagonal principal.
	h) si la matriz es simétrica.
	
El ejercicio debe contar con un menú que le permita al usuario, ver la opción
deseada

*/

#include <stdio.h>
#include <stdlib.h>

void cargarMatriz(int N,int[N][N]);
void mostrarMatriz(int N,int[N][N]);
char menu(void);
void sumatoriaFila(int N,int[N][N]);
void maxElementoSegundaCol(int N,int[N][N]);
void promMultiploCinco(int N,int[N][N]);
void sumaDiagonalPpal(int N,int[N][N]);
void minimosPorFila(int N,int[N][N]);
void diagonalSecundaria(int N,int[N][N]);
void elementBajoDiagonalPpal(int N,int[N][N]);
void esSimetrica(int N,int[N][N]);


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
		if(opcion!='i')
			mostrarMatriz(N,matriz);
		switch(opcion){
			case 'a': sumatoriaFila(N,matriz); break;
			case 'b': maxElementoSegundaCol(N,matriz); break;
			case 'c': promMultiploCinco(N,matriz); break;
			case 'd': sumaDiagonalPpal(N,matriz); break;
			case 'e': minimosPorFila(N,matriz); break;
			case 'f': diagonalSecundaria(N,matriz); break;
			case 'g': elementBajoDiagonalPpal(N,matriz); break;
			case 'h': esSimetrica(N,matriz); break;
		}
		if(opcion!='i')
			system("pause");		
	}while(opcion!='i');
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
    printf(" [a] Sumatoria de los elementos de una fila\n");
    printf(" [b] Mayor elemento de la segunda columna.\n");
    printf(" [c] Promedio de todos los multiplos de 5 en la matriz.\n");
    printf(" [d] Sumatoria de la diagonal principal de la matriz.\n");
    printf(" [e] Elemento minimo de cada fila.\n");
    printf(" [f] Elementos de la diagonal secundaria.\n");
    printf(" [g] Elementos que se encuentran debajo de la diagonal principal.\n");
    printf(" [h] Verificar si la matriz es simetrica.\n");
    printf(" [i] Salir.\n");
    do{
    	printf("\n Elija una opcion: ");
    	fflush(stdin);
    	scanf("%c",&opc);
    	if(opc<'a' || opc>'i')
    		printf("\n ERROR, opcion invalida!\n");
	}while(opc<'a' || opc>'i');
    
	return opc;
}

void sumatoriaFila(int N,int matriz[N][N]){
	int i,suma=0,fila;
	printf("\n Sumatoria de una fila\n");
	do{
		printf("\n Ingrese el numero de fila: ");
		scanf("%d",&fila);
		if(fila<0 || fila>N-1)
			printf("\n ERROR, ingrese un numero de fila valido\n\n");
	}while(fila<0 || fila>N-1);
	for(i=0;i<N;i++)
		suma += matriz[fila][i];
	printf("\n La sumatoria de elementos de la fila [%d] es: %d\n\n ",fila,suma);
}

void maxElementoSegundaCol(int N,int matriz[N][N]){
	int i,max=matriz[0][1];
	for(i=0;i<N;i++){
		if(matriz[i][1]>max)
			max = matriz[i][1];
	}
	printf("\n Maximo elemento de la segunda columna: %d\n\n ",max);
}

void promMultiploCinco(int N,int matriz[N][N]){
	int i,j,cont=0,suma=0;
	float promedio;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(matriz[i][j]%5==0){
				cont++;
				suma+=matriz[i][j];
			}
		}
	}
	promedio = (float)suma/(float)cont;
	printf("\n Promedio de elementos multiplos de cinco: %.2f\n\n ",promedio);
}

void sumaDiagonalPpal(int N,int matriz[N][N]){
	int i,j,suma=0;
	for(i=0;i<N;i++)
		suma+=matriz[i][i];
	printf("\n La sumatoria de la diagonal principal es: %d\n\n ",suma);
}

void minimosPorFila(int N,int matriz[N][N]){
	int i,j,min;
	
	for(i=0;i<N;i++){
		min = matriz[i][0];
		printf("\n Elemento minimo de la fila [%d]: ",i);
		for(j=0;j<N;j++){
			if(matriz[i][j]<min)
				min = matriz[i][j];
		}
		printf("%d",min);
	}
	printf("\n\n ");
}

void diagonalSecundaria(int N,int matriz[N][N]){
	int i;
	printf("\n Elementos de la diagonal secundaria: ");
	for(i=0;i<N;i++){
		printf("[%d] ",matriz[N-1-i][i]);
	}
	printf("\n\n ");
}

void elementBajoDiagonalPpal(int N,int matriz[N][N]){
	int i,j;
	int cont=1;
	printf("\n Elementos bajo la diagonal principal\n\n");
	for(i=1;i<N;i++){
		for(j=0;j<cont;j++){
			printf(" [%02d]",matriz[i][j]);
		}
		printf("\n");
		cont++;
	}
	printf("\n\n ");
}

void esSimetrica(int N,int matriz[N][N]){
	int i,j,transpuesta[N][N],cont=0;
	//creo la matriz traspuesta
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			transpuesta[j][i] = matriz[i][j];
	}
	//si la matriz original es igual a la transpuesta entonces es simetrica
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(transpuesta[i][j] != matriz[i][j])
				cont=1;	
		}	
	}
	if(cont==0)
		printf("\n La matriz es simetrica\n\n ");
	else
		printf("\n La matriz no es simetrica\n\n ");
}





