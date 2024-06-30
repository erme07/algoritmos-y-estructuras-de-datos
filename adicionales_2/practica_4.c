#include <stdio.h>
#include <stdlib.h>

int evaluarEmpleado(int, int, int);
void mostrarEvaluacion(int, int);

int main(){
	int codigo,cantDias, contadorFueraNivel=0, mayorCantDias=0, mayorCantDiasCodigo;
	int calidad,cooperacion,creatividad,evaluacion;
	char profesional[3],continuar;
	
	do{
		system("cls");
		printf("\n Ingrese  el codigo del empleado: ");
		scanf("%d",&codigo);
		printf("\n Ingrese la cantidad de dias trabajados: ");
		scanf("%d",&cantDias);
		if(mayorCantDias == 0 || mayorCantDias < cantDias){
			mayorCantDias = cantDias;
			mayorCantDiasCodigo = codigo;
		}
		printf("\n Es profesional? si/no: ");
		fflush(stdin);
		scanf("%s",profesional);
		
		printf("\n\n EVALUACION");
		printf("\n ----------\n");
		printf("\n [ Puntuacion de 1 a 5 ]\n");
		printf("\n Calidad y cantidad de trabajo: ");
		scanf("%d",&calidad);
		printf("\n Cooperacion: ");
		scanf("%d",&cooperacion);
		if(strcmp(profesional,"si") == 0){
			printf("\n Capacidad de analisis y creatividad: ");
			fflush(stdin);
			scanf("%d",&creatividad);
			evaluacion = evaluarEmpleado(calidad,cooperacion,creatividad);
			mostrarEvaluacion(codigo,evaluacion);
			if(((calidad +cooperacion + creatividad)/3.0)<3)
				contadorFueraNivel++;
		}
		printf("\n\n Continuar registrando empleados? s/n: ");
		scanf(" %c",&continuar);
		
	}while(continuar == 's');
	system("cls");
	printf("\n Cantidad de profesionales \"Fuera de nivel\": %d\n",contadorFueraNivel);
	printf("\n Empleado con mayor cantidad de dias trabajados: %d\n",mayorCantDiasCodigo);
	
	return 0;
}

int evaluarEmpleado(int cal, int coop, int creat){
	if(cal>=4 && coop>=4 && creat>=4)
		return 1;
	else
		return 0;
}
void mostrarEvaluacion(int cod, int eval){
	printf("\n\n Empleado: %d\n", cod);
	if(eval==1)
		printf("\n TIENE CAPACIDAD DE DESARROLLO");
	else
		printf("\n NO TIENE CAPACIDAD DE DESARROLLO\n");
}


