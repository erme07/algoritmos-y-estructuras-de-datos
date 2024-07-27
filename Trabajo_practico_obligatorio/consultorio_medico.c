#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50 //cantidad de pacientes

//funciones del sistema
char login(void);
int menu_g(void);
int menu_r(void);
int menu_m(void);

//funciones del recepcionista
int verificarDisponibilidad(int[2][6],int,int);
int abrirHistoriaClinica(int*,char[N][30],char[N][30],int*,int*,char*,int*);
int asignarTurno(int[2][6],int*,char[N][30],char[N][30],int*,int*,char*,int*);
int cobrarEstudiosAnalisis(void);
int cobroConsulta(int);

//funciones del medico
void verHistoriaClinica(int*,char[N][400],char[N][30],char[N][30],int*);
void escribirHistoriaClinica(int*,char[N][400],char[N][30],char[N][30],int*);
void verCronograma(int[2][6]); //disponible tambien para recepcionista

//funciones del gerente
void recaudacionTotal(int);
void espMasSolicitada(int[2][6]);
void diaMaxRecaudacion(int[2][6]);


int main(){

	char nombres[N][30],apellidos[N][30],hclinica[N][400],generos[N];
	int cronograma[2][6],nro_hclinica[N],edades[N],dni[N];
	int i,j, posicion=0, recaudacion=0,opcion;
	char rol,rta;

	for(i=0;i<2;i++){ //inicializo la matriz cronograma con 12 turnos en cada posición
		for(j=0;j<6;j++)
			cronograma[i][j] = 12;
	}
	for(i=0;i<N;i++){ //inicializo la matriz con una frase que indica que aun no se ha escrito en la historia clínica del paciente
		strcpy(hclinica[i], "-- VACIO --");
	}
	
	do{
		//Perfiles
		//user: gerente         pass: 1234
		//user: recepcionista   pass: 0000
		//user: medico          pass: abcd
		rol = login(); // inicia sesion y define el rol del usuario
		if(rol=='m'){
			do{
				opcion = menu_m();
				switch(opcion){
					case 1:
			            	system("cls");
			            	verCronograma(cronograma);
			            	printf("\n ");
			            	system("pause"); break;
					case 2:
			            	verHistoriaClinica(nro_hclinica, hclinica, nombres,apellidos,&posicion);
			            	system("pause");
			            	break;
					case 3:
			            	escribirHistoriaClinica(nro_hclinica, hclinica, nombres,apellidos,&posicion);
			            	system("pause");
			            	break;
					case 4: rol='x'; break;
				}
			}while(rol!='x');

		}else if(rol=='g'){
			do{
				opcion = menu_g();
				switch(opcion){
					case 1: recaudacionTotal(recaudacion); break;
					case 2: espMasSolicitada(cronograma); break;
					case 3: diaMaxRecaudacion(cronograma); break;
					case 4: rol='x'; break;
				}
			}while(rol!='x');

		}else if(rol=='r'){
			do{
				opcion = menu_r();
				switch(opcion){
					case 1:
			            	do{
				                recaudacion += asignarTurno(cronograma,nro_hclinica,nombres,apellidos,edades,dni,generos,&posicion);
				                printf("\n Desea seguir asignando turnos? s/n: ");
				                fflush(stdin);
				                scanf("%c",&rta);
			              	}while(rta=='s');
			              	break;
					case 2:
				        	system("cls");
				            verCronograma(cronograma);
				            printf("\n ");
				            system("pause"); break;
					case 3:
							system("cls");
			            	abrirHistoriaClinica(nro_hclinica, nombres,apellidos,edades,dni,generos,&posicion);
			            	break;
					case 4: recaudacion += cobrarEstudiosAnalisis();
                  			break;
					case 5: rol='x'; break;
				}
			}while(rol!='x');
		}
	}while(rol=='x');
	return 0;
}



//ingreso de usuario
char login(){
	char pass[30],user[30],rol;
	//Perfiles
	//user: gerente         pass: 1234
	//user: recepcionista   pass: 0000
	//user: medico          pass: abcd
	do{
	    system("cls");
	    printf("\n INICIAR SESION\n");
	    printf("\n Ingrese usuario: ");
	    fflush(stdin);
	    scanf("%s",user);
	    printf("\n Ingrese contrase%ca: ",164);
	    fflush(stdin);
	    scanf("%s",pass);
	    if(strcmp(user,"recepcionista") == 0 && strcmp(pass,"0000") == 0)
	    	rol='r';
	    else if(strcmp(user,"gerente") == 0 && strcmp(pass,"1234") == 0)
	      	rol='g';
	    else if(strcmp(user,"medico") == 0 && strcmp(pass,"abcd") == 0)
	      	rol='m';
	    else{
	      	printf("\n Error, usuario o contraseña incorrecta\n\n ");
	      	system("pause");
	      	rol='x';
	    }
	}while(rol == 'x');

	return rol;
}


//imprime menu de opciones para cada rol
int menu_r(){
	int op;
	do{
		system("cls");
		printf("\n MENU\n\n");
		printf(" [1] Programar turno\n");
		printf(" [2] Ver cronograma\n");
		printf(" [3] Abrir historia clinica\n");
		printf(" [4] Cobrar estudios y analisis\n");
		printf(" [5] Cerrar sesion\n\n");
		printf(" Seleccione una opcion: ");
		scanf("%d",&op);
		if(op<1 || op>5){
			printf("\n Error, ingrese una opcion valida\n\n ");
			system("pause");
		}
	}while(op<1 || op>5);
	return op;
}
int menu_m(){
	int op;
	do{
		system("cls");
		printf("\n MENU\n\n");
		printf(" [1] Ver cronograma\n");
		printf(" [2] Ver historia clinica\n");
		printf(" [3] Escribir en historia clinica\n");
		printf(" [4] Cerrar sesion\n\n");
		printf(" Seleccione una opcion: ");
		scanf("%d",&op);
		if(op<1 || op>4){
			printf("\n Error, ingrese una opcion valida\n\n ");
			system("pause");
		}
	}while(op<1 || op>4);
	return op;
}
int menu_g(){
	int op;
	do{
		system("cls");
		printf("\n MENU\n\n");
		printf(" [1] Ver recaudacion total\n");
		printf(" [2] Especialidad mas solicitada\n");
		printf(" [3] Dia de mayor recaudacion\n");
		printf(" [4] Cerrar sesion\n\n");
		printf(" Seleccione una opcion: ");
		scanf("%d",&op);
		if(op<1 || op>4){
			printf("\n Error, ingrese una opcion valida\n\n ");
			system("pause");
		}
	}while(op<1 || op>4);
	return op;
}


//funciones recepcionista
int verificarDisponibilidad(int cronograma[2][6],int dia,int hora){
	int disp=0;
	if(cronograma[hora][dia]>0)
		disp=1;
	else{
		printf("\n No hay turnos disponibles para el dia y hora seleccionados\n\n ");
		system("pause");
	}
	return disp;
}

int asignarTurno(int crono[2][6],int *num_hclinic,char nombres[N][30],char apellidos[N][30],int *edades,int *dni,char *generos, int *pos){

	int i,num;
	char especialidad, rta;
	int flag=0;
	int importe=0;
	int hora,dia,disp;
	int obra_s,pago,vuelto;

	do{
		system("cls");
		printf("\n PROGRAMADOR DE TURNOS\n\n");
		printf(" Posee historia clinica? s/n: ");
		fflush(stdin);
		scanf("%c",&rta);
		if(rta=='n')
			num = abrirHistoriaClinica(num_hclinic, nombres,apellidos,edades,dni,generos,pos);
		else if(rta=='s' && (*pos) == 0){
			printf("\n Aun no hay historias clinicas registradas...\n\n");
			printf(" ABRIR HISTORIA CLINICA\n\n");
		  	num = abrirHistoriaClinica(num_hclinic, nombres,apellidos,edades,dni,generos,pos);
		}else if(rta=='s'){
			do{
				printf("\n Ingrese el numero de historia clinica: ");
		    	scanf("%d",&num);
		        for(i=0;i<*pos;i++){
		          if(*(num_hclinic+i)== num)
		            flag=1;
		        }
		        if(flag==0){
		          	printf("\n Error, el numero ingresado no existe en la base de datos\n\n ");
		          	system("pause");
		        }
		    	system("cls");
		 	}while(flag==0);
		}else{
			printf("\n Ingrese una respuesta valida!\n\n ");
			system("pause");
		}
	}while(rta != 's' && rta != 'n');

	do{
		system("cls");
		verCronograma(crono);
		printf("\n\n ESPECIALIDADES\n\n");
		printf(" [o] Odontologia\t[f] Oftalmologia\t[t] Traumatologia\n\n");
		printf(" [d] Dermatologia\t[m] Medicina clinica\t[n] Neumonologia\n\n");
		printf(" Seleccione la especialidad: ");
		fflush(stdin);
		scanf("%c",&especialidad);
		switch(especialidad){
		  case 'o':
		      hora=0;
		      printf("\n\n Fechas para Odontologia:\n\n");
		      printf(" [0] Lunes(ma%cana)\t[2] Miercoles(ma%cana)\n\n",164,164);
		      printf(" Seleccione la fecha: ");
		      scanf("%d",&dia);
		      importe = 6000;
		      break;
		  case 'f':
		      hora = 0;
		      dia = 4;
		      printf("\n\n Fecha para Oftalmologia: Viernes(ma%cana)\n\n",164);
		      importe = 6000;
		      break;
		  case 't':
		      hora = 1;
		      printf("\n\n Fechas para Traumatologia:\n\n");
		      printf(" [0] Lunes(tarde)\t[2] Miercoles(tarde)\n\n");
		      printf(" Seleccione la fecha: ");
		      scanf("%d",&dia);
		      importe = 5000;
		      break;
		  case 'd':
		      hora = 1;
		      dia = 4;
		      printf("\n\n Fecha para dermatologia: Viernes(tarde)\n");
		      importe = 6000;
		      break;
		  case 'm':
		      hora = 1;
		      printf("\n\n Fechas para Medicina Clinica:\n\n");
		      printf(" [1] Martes(tarde)\t[3] Jueves(tarde)\t[5] Sabado(tarde)\n\n");
		      printf(" Seleccione la fecha: ");
		      scanf("%d",&dia);
		      importe = 5000;
		      break;
		  case 'n':
		      hora=0;
		      printf("\n\n Fechas para Neumonologia:\n\n");
		      printf(" [1] Martes(ma%cana)\t[3] Jueves(ma%cana)\t[5] Sabado(ma%cana)\n\n",164,164,164);
		      printf(" Seleccione la fecha: ");
		      scanf("%d",&dia);
		      importe = 5000;
		      break;
			}
			disp = verificarDisponibilidad(crono,dia,hora);
	}while(disp==0);

	importe = cobroConsulta(importe);
	system("cls");
	crono[hora][dia] = crono[hora][dia] - 1;
	printf("\n Turno Reservado con exito\n\n");
	printf(" Paciente: %s %s\n",*(nombres+(num-100)),*(apellidos+(num-100)));
	printf(" DNI: %d\n",*(dni+(num-100)));
	return importe;
}

int cobroConsulta(int importe){
	char rta;
	int obra_s,pago,vuelto;

	printf("\n Tiene obra social? s/n: ");
	fflush(stdin);
	scanf("%c",&rta);
	if(rta=='s'){
		printf("\n Ingrese el numero de obra social: ");
		scanf("%d",&obra_s);
		importe = importe / 2;
	}
	printf("\n Importe a pagar: $%d\n\n", importe);
	do{
	    printf(" El cliente paga con: $");
	    fflush(stdin);
	    scanf("%d",&pago);
	    if(pago<importe)
	    	printf("\n El pago recibido es insuficiente\n\n");
	}while(pago<importe);
	vuelto = pago - importe;
	printf("\n Vuelto: $%d\n\n ",vuelto);
	system("pause");
	return importe;
}

int abrirHistoriaClinica(int *nro_hclinica, char nombres[N][30],char apellidos[N][30],int *edades,int *dni,char *generos,int *pos){
	int num;
	printf("\n ABRIENDO HISTORIA CLINICA\n");
	printf("\n Ingrese el nombre: ");
	fflush(stdin);
	scanf("%s",*(nombres+(*pos)));
	printf(" Ingrese el apellido: ");
	fflush(stdin);
	scanf("%s",*(apellidos+(*pos)));
	printf("\n GENEROS\n\n");
	printf(" [m] Masculino\t[f] Femenino\n\n");
	do{
	    printf(" Ingrese el genero: ");
	    fflush(stdin);
	    scanf("%c",generos+(*pos));
	    if(*(generos+(*pos)) != 'm' && *(generos+(*pos)) != 'f')
	    	printf("\n Ingrese un genero valido\n\n");
	}while(*(generos+(*pos)) != 'm' && *(generos+(*pos)) != 'f');
	do{
	    printf(" Ingrese la edad: ");
	    fflush(stdin);
	    scanf("%d",edades+(*pos));
	    if(*(edades+(*pos))<1 || *(edades+(*pos))>120)
	    	printf("\n Ingrese  una edad valida\n\n");
	}while(*(edades+(*pos))<1 || *(edades+(*pos))>120);
	printf(" Ingrese el DNI: ");
	fflush(stdin);
	scanf("%d",dni+(*pos));
	num = (*pos) + 100;
	*(nro_hclinica+(*pos)) = num;
	(*pos)++;
	printf("\n Numero de Historia clinica generada: %d\n\n ",num);
	system("pause");
	system("cls");
	return num;
}

void verCronograma(int crono[2][6]){
	printf("\n                                  TURNOS DISPONIBLES\n\n");
	printf("          ===================================================================\n");
	printf("          |   LUN.   |   MAR.   |   MIER.  |   JUE.   |   VIE.   |   SAB.   |\n");
	printf("          ===================================================================\n\n");
	printf("          ===================================================================\n");
	printf("          |  Odonto. |  Neumo.  |  Odonto. |  Neumo.  |  Oftal.  |  Neumo.  |\n");
	printf("          ===================================================================\n");
	printf("          |          |          |          |          |          |          |\n");
	printf("  Ma%cana  |    %02d    |    %02d    |    %02d    |    %02d    |    %02d    |    %02d    |\n",164,crono[0][0],crono[0][1],crono[0][2],crono[0][3],crono[0][4],crono[0][5]);
	printf("          |          |          |          |          |          |          |\n");
	printf("          ===================================================================\n");
	printf("          |  Trauma. |  Clinica |  Trauma. |  Clinica |  Derma.  |  Clinica |\n");
	printf("          ===================================================================\n");
	printf("          |          |          |          |          |          |          |\n");
	printf("  Tarde   |    %02d    |    %02d    |    %02d    |    %02d    |    %02d    |    %02d    |\n",crono[1][0],crono[1][1],crono[1][2],crono[1][3],crono[1][4],crono[1][5]);
	printf("          |          |          |          |          |          |          |\n");
	printf("          ===================================================================\n");
}

int cobrarEstudiosAnalisis(){
	int opcion,importe,obra_s,pago,vuelto;
	char rta;
	do{
		system("cls");
		printf("\n ESTUDIOS Y ANALISIS\n\n");
		printf(" Diagnostico por imagen\t\tLaboratorio\n\n");
		printf(" [0] Ecografia\t\t\t[3] Analisis de orina\n");
		printf(" [1] Radiografia\t\t[4] Analisis de sangre\n");
		printf(" [2] Tomografia\n\n");
		printf(" Seleccione una opcion: ");
		scanf("%d",&opcion);
		if(opcion<0 || opcion>4){
			printf("\n Error, opcion invalida!\n\n ");
			system("pause");
		}
	}while(opcion<0 || opcion>4);
	switch(opcion){
		case 0: importe = 2000; break;
		case 1: importe = 2500; break;
		case 2: importe = 4000; break;
		case 3: importe = 2000; break;
		case 4: importe = 2500; break;
	}
	printf("\n Tiene obra social? s/n: ");
	fflush(stdin);
	scanf("%c",&rta);
	if(rta=='s'){
		printf("\n Ingrese el numero de obra social: ");
		scanf("%d",&obra_s);
		importe = importe / 2;
	}
	printf("\n El importe a pagar es: $%d\n\n",importe);
	do{
	    printf(" El cliente paga con: $");
	    fflush(stdin);
	    scanf("%d",&pago);
	    if(pago<importe)
	    	printf("\n El pago recibido es insuficiente\n\n");
	}while(pago<importe);
	vuelto = pago - importe;
	printf("\n El vuelto es de $%d\n\n ",vuelto);
	system("pause");
	return importe;
}


//funciones gerente
void recaudacionTotal(int rec){
	system("cls");
	printf("\n La recaudacion total hasta el momento es: $%d\n\n ",rec);
	system("pause");
}

void espMasSolicitada(int crono[2][6]){
	int i,j,posMinI=0,posMinJ=0;
	int min = crono[0][0];
	//la mas solicitada es la que menos turnos disponible tiene
	for(i=0;i<2;i++){
		for(j=0;j<6;j++){
			if(crono[i][j]<min){
				min = crono[i][j];
				posMinI = i;
				posMinJ = j;
			}
		}
	}
	system("cls");
  	printf("\n Especialidad mas solicitada: ");
	switch(posMinJ){
		case 0:
				if(posMinI==0)
					printf("Odontologia - Lunes(Ma%cana)\n\n ",164);
				else
					printf("Traumatologia - Lunes(Tarde)\n\n ");
				break;
		case 1:
				if(posMinI==0)
					printf("Neumonologia - Martes(Ma%cana)\n\n ",164);
				else
					printf("Medicina Clinica - Martes(Tarde)\n\n ");
				break;
		case 2:
				if(posMinI==0)
					printf("Odontologia - Miercoles(Ma%cana)\n\n ",164);
				else
					printf("Traumatologia - Miercoles(Tarde)\n\n ");
				break;
		case 3:
				if(posMinI==0)
					printf("Neumonologia - Jueves(Ma%cana)\n\n ",164);
				else
					printf("Medicina Clinica - Jueves(Tarde)\n\n ");
				break;
		case 4:
				if(posMinI==0)
					printf("Oftalmologia - Viernes(Ma%cana)\n\n ",164);
				else
					printf("Dermatologia - Viernes(Tarde)\n\n ");
				break;
		case 5:
				if(posMinI==0)
					printf("Neumonologia - Sabado(Ma%cana)\n\n ",164);
				else
					printf("Medicina Clinica - Sabado(Tarde)\n\n ");
				break;
	}
	system("pause");
}

void diaMaxRecaudacion(int crono[2][6]){
	int i,j,dia=0;
	int recMax = crono[0][0]+crono[1][0];

	for(i=0;i<2;i++){
		if(crono[0][i] + crono[1][i]<recMax){
			recMax = crono[0][i]+crono[1][i];
			dia=i;
		}
	}
	system("cls");
	printf("\n Dia con mayor recaudacion: ");
	switch(dia){
		case 0: printf("Lunes\n\n "); break;
		case 1: printf("Martes\n\n "); break;
		case 2: printf("Miercoles\n\n "); break;
		case 3: printf("Jueves\n\n "); break;
		case 4: printf("Viernes\n\n "); break;
		case 5: printf("Sabado\n\n "); break;
	}
	system("pause");
}


//funciones medico
void escribirHistoriaClinica(int *nro_hclinica,char hclinica[N][400],char nombres[N][30],char apellidos[N][30],int *pos){
	int flag=0;
	int num,i,poshclinic;
	do{
		system("cls");
		printf("\n ESCRIBIR EN LA HISTORIA CLINICA\n\n");
		printf(" Ingrese el numero de historia clinica: ");
    	scanf("%d",&num);
    	for(i=0;i<*pos;i++){
	        if(*(nro_hclinica+i) == num){
	        	flag=1;
	        	poshclinic=i;
	        }
    	}
    	if(flag==0){
    		printf("\n Error, el numero ingresado no existe en la base de datos\n\n ");
    		system("pause");
		}
  	}while(flag==0);
   	printf("\n Historia clinica nro. %d\n\n",num);
   	printf(" Paciente %s %s\n\n",*(nombres+poshclinic),*(apellidos+poshclinic));
   	printf(" Escriba una observacion medica y presione ENTER\n\n");
   	printf(" Observacion: ");
   	fflush(stdin);
   	scanf("%399[^\n]",*(hclinica+poshclinic)); // evito que la lectura se corte al introducir espacios y limito la cantidad de caracteres
   	fflush(stdin);
   	printf("\n ");
}

void verHistoriaClinica(int *nro_hclinica,char hclinica[N][400],char nombres[N][30],char apellidos[N][30],int *pos){
	int flag=0;
	int num,i,poshclinic;
	do{
		system("cls");
		printf("\n LEER HISTORIA CLINICA\n\n");
		printf(" Ingrese el numero de historia clinica: ");
    	scanf("%d",&num);
    	for(i=0;i<*pos;i++){
	        if(*(nro_hclinica+i) == num){
	        	flag=1;
	        	poshclinic=i;
			}
    	}
    	if(flag==0){
    		printf("\n Error, el numero ingresado no existe en la base de datos\n\n ");
    		system("pause");
		}
   	}while(flag==0);
   	printf("\n Historia clinica nro. %d\n\n",num);
   	printf(" Paciente %s %s\n\n",*(nombres+poshclinic),*(apellidos+poshclinic));
   	printf(" Observacion: %s\n\n ",*(hclinica+poshclinic));
}
