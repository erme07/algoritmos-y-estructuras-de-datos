/*

ENUNCIADO

HALLAR EL ÁREA DE LA SIGUIENTE FIGURA Y MOSTRARLA POR PANTALLA.
HACER EL MISMO EJERCICIO CON LAS FUNCIONES AREA1, AREA2, ÁREA, MOSTRAR.
  
  3m
 ______
|      |
|      | 3m
|      |    4m
|      ¯¯¯¯¯¯¯¯¯¯|
|                | 2m
¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯

*/

#include <stdio.h>
#include <stdlib.h>

int area1(void);
int area2(void);
int area(void);
void mostrar(int);

int main(){
	int valor_area;
	valor_area = 3*3 + 4*2;
	printf("\n El valor del area es: %dm\n",valor_area);
	 
	valor_area = area();
	mostrar(valor_area);
	system("pause");
	return 0;
}

int area1(){
	int b=3, h=3;
	return b*h;
}

int area2(){
	int b=4, h=2;
	return b*h;
}

int area(){
	int a1,a2;
	a1 = area1();
	a2 = area2();
	return a1+a2;
}

void mostrar(int area){
	printf("\n El area total de la figura es: %dm\n\n ",area);
}

