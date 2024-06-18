/*
DESAFÍO

Desarrolle un programa en c que le permita imitar el juego de 3 en raya, para dos
jugadores. El mismo debe finalizar cuando algún jugador gane. 
*/

#include <stdio.h>
#include <stdlib.h>

#define N 3

void reiniciarTablero(char[N][N]);
void imprimirTablero(char[N][N]);
int disponibilidad(char[N][N],int,int);
int tresEnRaya(char[N][N],char);

int main(){
	char tablero[N][N],resp;
	int x,y,disponible,jugador=1,fin=0;
	
	do{
		system("cls");
		reiniciarTablero(tablero);
		do{
			imprimirTablero(tablero);
			printf("\n\n Turno Jugador %d\n\n",jugador);
			printf("\n Formato de coordanadas 0,0\n\n");
			do{
				do{
					printf(" Ingrese las coordenadas: ");
					scanf("%d,%d",&x,&y);
					if(x<0 || y<0 || x>2 || y>2)
						printf("\n ERROR, ingrese coordenadas validas!\n\n");
				}while(x<0 || y<0 || x>2 || y>2);
				disponible = disponibilidad(tablero,x,y);
				if(disponible==0)
					printf("\n El casillero elegido ya se encuentra ocupado\n\n");
			}while(disponible == 0);
			
			if(jugador==1){
				tablero[x][y]='X';
				fin = tresEnRaya(tablero,'X');
				if(fin==0)
					jugador=2;
			}
			else{
				tablero[x][y]='O';
				fin = tresEnRaya(tablero,'O');
				if(fin==0)
					jugador=1;
			}
			system("cls");
		}while(fin==0);
		
		imprimirTablero(tablero);
		
		if(fin==3)
			printf("\n\n EMPATE\n\n");
		else
			printf("\n\n Ganador JUGADOR %d\n\n",jugador);
			
		do{
			printf(" Volver a jugar? s/n: ");
			fflush(stdin);
			scanf("%c",&resp);
			if(resp!='s' && resp!='n')
				printf("\n ERROR, ingrese una respuesta valida\n\n");
		}while(resp!='s' && resp!='n');
		
	}while(resp=='s');
	return 0;
}

void imprimirTablero(char tab[N][N]){
	int i,j;
	printf("\n TRES EN RAYA\n");
	printf("\n\n     0  1  2\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(j==0)
				printf(" %d  ",i);
			printf("[%c]",tab[i][j]);
		}
		printf("\n");
	}
}

void reiniciarTablero(char tab[N][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			tab[i][j]=' ';
	}
}

int disponibilidad(char tab[N][N],int x,int y){
	if(tab[x][y] == ' ')
		return 1;
	else
		return 0;
}

int tresEnRaya(char tab[N][N],char letra){
	int i,j,cont=0;
	for(i=0;i<N;i++){
		if(tab[i][0] == letra && tab[i][1] == letra)
			if(tab[i][0] == letra && tab[i][2] == letra)
				return 1;	
	}
	for(i=0;i<N;i++){
		if(tab[0][i] == letra && tab[1][i] == letra)
			if(tab[0][i] == letra && tab[2][i] == letra)
		 		return 1;
	}
	if(tab[0][0] == letra && tab[1][1] == letra)
		if(tab[0][0] == letra && tab[2][2] == letra)
			return 1;
	if(tab[0][2] == letra && tab[1][1] == letra)
		if(tab[0][0] == letra && tab[2][0] == letra)
			return 1;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(tab[i][j]==' ')
				cont++;
		}	
	}
	if(cont==0)
		return 3;
		
	return 0;
}


