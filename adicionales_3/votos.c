#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

int menu(void);
int login(void);
void cargarDatos(int, int, int[], char[], int*);
char resultado(int[],char[],int);

int main(){
	
	int log,opcion,posicion=0,i;
	int dni,dnivec[N];
	char voto,votovec[N],ganador;
	
	do{
		log = login();
		if(log==0){
			printf("\n ERROR, Usuario o clave incorrecta\n\n ");
			system("pause");
		}else{
			do{
				opcion = menu();
				if(opcion==1){
					system("cls");
					printf("\n Ingrese el DNI: ");
					scanf("%d",&dni);
					printf("\n Candidatos\n\n");
					printf(" [a] IronMan\n [b] Capitan America\n [c] Hulk\n\n");
					printf(" Seleccione el candidato: ");
					fflush(stdin);
					scanf("%c",&voto);
					cargarDatos(dni,voto,dnivec,votovec,&posicion);
				}
				else if(opcion == 2){
					ganador = resultado(dnivec,votovec,posicion);
					system("cls");
					printf("\n GANADOR\n\n");
					switch(ganador){
						case 'a':
							printf(" Letra: %c\tNombre: IronMan\n\n ",ganador);
							break;
						case 'b':
							printf(" Letra: %c\tNombre: Capitan America\n\n ",ganador);
							break;
						case 'c':
							printf(" Letra: %c\tNombre: Hulk\n\n ",ganador);
							break;
					}
					system("pause");
				}else if(opcion!=3){
					printf(" ERROR, ingrese una opcion valida!\n\n ");
					system("pause");
				} 
			}while(opcion != 3);
		}
	}while(log == 0);
	return 0;
}

int menu(){
	int opc;
	system("cls");
	printf("\n MENU\n\n");
	printf(" [1] Votar\n");
	printf(" [2] Mostrar Resultados\n");
	printf(" [3] Salir\n\n");
	printf(" Seleccione una opcion: ");
	scanf("%d",&opc);
	return opc;
}

int login(){
	char user[10];
	int clave;
	system("cls");
	printf("\n LOGIN\n\n");
	printf(" Ingrese el usuario: ");
	fflush(stdin);
	scanf("%s",user);
	printf(" Ingrese la clave: ");
	scanf("%d",&clave);
	if(strcmp(user,"usuario") == 0 && clave == 1234)
		return 1;
	else
		return 0;	
}


void cargarDatos(int dni,int voto,int dnivec[],char votovec[],int* pos){
	*(dnivec+*(pos)) = dni;
	*(votovec+*(pos)) = voto;
	(*pos)++;
}


char resultado(int dnivec[],char votovec[],int pos){
	int contA=0,contB=0,contC=0,i;
	char ganador;
	for(i=0;i<pos;i++){
		if(*(votovec+i)=='a')
			contA++;
		else if(*(votovec+i)=='b')
			contB++;
		else if(*(votovec+i)=='c')
			contC++;
	}
	if(contA >= contB && contA >= contC)
		ganador='a';
	else if(contB >= contA && contB >= contC)
		ganador='b';
	else if(contC >= contA && contC >= contB)
		ganador='c';
	return ganador;
}


