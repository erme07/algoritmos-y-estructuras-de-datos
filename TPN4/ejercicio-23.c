/*
Enunciado

El Gobierno Argentino quiere hacer un estudio de hábitos de consumo de alcohol y
bebida entre la juventud. Para ello, ha escogido todas las provincias donde llevará a cabo
la consulta. El gobierno provincial de cada una recogerá el número de litros consumidos
durante el pasado año de los 8 tipos de bebidas nombrados a continuación:

Tipos De Bebidas

0. Naturales: agua, leche, jugos, infusiones, etc.
1. Gaseosos sin alcohol: refrescos, sodas, etc.
2. Vinos
3. Cervezas
4. Whisky
5. Licores
6. Energéticos: Red Bull, etc
7. Combinados: Cuba libre, GinTonics, etc.

Mediante un programa, se pide que realices un estudio que estará compuesto por los
siguientes pasos:

	1. 	Ingresar y almacenar la información, para cada provincia, sobre los litros consumidos
		de los tipos de bebidas mencionados. Recuerda que las provincias aportarán
		información a tu estudio. No obstante, la información no te la tienen por qué dar
		ordenada por tipo de bebida o número de litros y puede que de algún tipo de bebida
		no se tenga información.
		Así, será preciso introducir pares (tipo de bebida, litros) y para indicar
		que no hay más datos de una provincia, bastará con introducir como tipo de bebida el
		valor -1.
		
	2. 	Determina el “tipo de bebida” más consumida entre todas los provincias; es decir, el
		tipo de bebida del que más litros se hayan bebido entre todas las provincias.
*/

#include<stdio.h>
#include<stdlib.h>

#define PR 23
#define TP 8

int main(){
	float litrosxprov[PR][TP]={0};
	char provincias[PR][30] = {
							"Bs. As.", "Catamarca", "Chaco", "Chubut", "Cordoba",
							"Corrientes", "Entre Rios", "Formosa", "Jujuy", "La Pampa",
							"La Rioja", "Mendoza", "Misiones", "Neuquen", "Tierra del Fuego",
							"Salta", "San Juan", "Santa Cruz", "San Luis", "Santa Fe",
							"Santiago del Estero", "Tucuman", "Rio Negro"};
	
	int i,j, tipo, maxtipo = 0;
	float litros, maxlitros = 0,suma = 0;
	int prov;
  	
  	do{
  		system("cls");
  		printf("\n Provincias\n\n");
	    for(i=0;i<PR;i++){
	    	printf(" [%d] %s\t",i,provincias[i]);
	    	if((i+1)%3==0)
	    		printf("\n");
		}
		printf(" [-1] Terminar/Mostrar Datos");
		do{
			printf("\n\n seleccione la provincia: ");
			scanf("%d",&prov);
			if(prov<-1 || prov>22)
				printf("\n ERROR, opcion invalida");
		}while(prov<-1 || prov>22);
		
		if(prov==-1)
		  	break;
		do{
			system("cls");
			printf("\n Provincia: %s\n\n",provincias[prov]);
		    printf(" Tipo de bebidas\n\n");
		    printf(" [0] Naturales\n");
		    printf(" [1] Gaseosos sin alcohol\n");
		    printf(" [2] Vinos\n");
		    printf(" [3] Cervezas\n");
		    printf(" [4] Whisky\n");
		    printf(" [5] Licores\n");
		    printf(" [6] Energeticos\n");
		    printf(" [7] Combinados\n");
		    printf(" [-1] Cambiar provincia\n\n");
		    do{
		    	printf (" Ingrese tipo de bebida: ");
				scanf("%d", &tipo);
				if(tipo<-1 || tipo>7)
					printf("\n ERROR, opcion invalida\n\n");
			}while(tipo<-1 || tipo>7);
		  	if(tipo==-1)
		  		break;
		  	do{
		  		printf (" Cantidad de litros: ");
				scanf("%f", &litros);
				if(litros<=0)
					printf("\n ERROR, debe ingresar un valor mayor a cero\n\n");
			}while(litros<=0);
		  	
			litrosxprov[prov][tipo] += litros;
		}while(tipo!=-1);
	}while(prov!=-1);
    
    system("cls");
	printf("\n Litros por provincia y tipo\n");
	printf("\n Tipo 0\t Tipo 1\t Tipo 2\t Tipo 3\t Tipo 4\t Tipo 5\t Tipo 6\t Tipo 7\t Provincia\n\n ");
	for(i=0;i<PR;i++){
		for(j=0;j<TP;j++){
			printf("%.1f\t ",litrosxprov[i][j]);
		}
		printf("%s\n ",provincias[i]);
	}
	
	for(i=0;i<TP;i++){
		for (j=0;j<PR;j++)
			suma += litrosxprov[j][i];
		if(suma>maxlitros){
				maxlitros = suma;
				maxtipo = i;
		}
		suma=0;
	}
    printf("\n Bebida mas consumida\n\n");
	printf(" Tipo: %d\t\t Litros: %.1f\n\n ", maxtipo, maxlitros);	
    system("pause");
    return 0;
}
