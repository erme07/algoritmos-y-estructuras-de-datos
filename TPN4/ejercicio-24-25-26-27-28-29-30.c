/*
24) ¿Qué imprime el siguiente programa?

	int *punt;
	int x=7; 
	int y=5;
	punt=&x;
	*punt=4;
	printf("%d, %d",x,y);// ¿qué imprime este printf? 

RESPUESTA

Imprime: "4 5"

25) ¿Qué imprime el siguiente programa?

	int *punt;
	int x=7;
	int y=5;
	punt=&x;
	x=4;
	printf(“%d, %d”,*punt,y); // ¿qué imprime este printf?
	
RESPUESTA

Imprime: "4 5"

26) ¿Qué imprime el siguiente programa?

	int *punta, *puntb;
	int x=7;
	int y=5;
	punta=&x;
	*punta=3;
	puntb=&y;
	*puntb=x;
	x=9;
	printf(“%d, %d”,*puntb, *punta); // ¿qué imprime?
	
RESPUESTA

Imprime: "3 9"

27) ¿Qué imprime el siguiente programa?.
	int *punta, *puntb;
	int x=7;
	int y=5;
	punta=&x;
	*punta=3;
	puntb=&y;
	*puntb=x;
	x=9;
	puntb=punta;
	printf(“%d, %d”,*puntb, y); // ¿qué imprime?

RESPUESTA

Imprime: "9 3"

28) ¿Qué imprime el siguiente programa?

	int *punt,i;
	int x[5]={1,2,3,4,5};
	punt=x;
	*punt=9;
	for(i=0;i<5;i++)
	printf(“%d,”,x[i]); // ¿qué imprime?
	
RESPUESTA

Imprime: "9,2,3,4,5,"

29) ¿Qué imprime el siguiente programa?

	int *punt,i;
	int x[5]={1,2,3,4,5};
	punt=&x[0];
	*punt=9;
	punt[3]=7;
	for(i=0;i<5;i++)
	printf(“%d,”,x[i]);

RESPUESTA

Imprime: "9,2,3,7,5,"

30) ¿Qué imprime el siguiente programa?

	int *punt,i;
	int x[5]={1,2,3,4,5};
	punt=x;
	*x=11;
	*(punt+3)=9 ;
	for(i=0;i<5;i++)
	printf(“%d,”,x[i]);

RESPUESTA

Imprime: "11,2,3,9,5,"

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *punt,x,y,*punta,*puntb,i;
	int xv[5]={1,2,3,4,5};
	
	//ejercicio 24
	x=7; 
	y=5;
	punt=&x;
	*punt=4;
	printf(" Ejercicio 24: ");
	printf("%d, %d\n\n",x,y);
	
	//ejercicio 25
	x=7;
	y=5;
	punt=&x;
	x=4;
	printf(" Ejercicio 25: ");
	printf("%d, %d\n\n",*punt,y);
	
	//ejercicio 26
	x=7;
	y=5;
	punta=&x;
	*punta=3;
	puntb=&y;
	*puntb=x;
	x=9;
	printf(" Ejercicio 26: ");
	printf("%d, %d\n\n",*puntb, *punta);
	
	//ejercicio 27
	x=7;
	y=5;
	punta=&x;
	*punta=3;
	puntb=&y;
	*puntb=x;
	x=9;
	puntb=punta;
	printf(" Ejercicio 27: ");
	printf("%d, %d\n\n",*puntb, y);
	
	//ejercicio 28
	
	punt=xv;
	*punt=9;
	printf(" Ejercicio 28: ");
	for(i=0;i<5;i++)
		printf("%d,",xv[i]);
	printf("\n\n");
	
	//ejercicio 29
	punt=&xv[0];
	*punt=9;
	punt[3]=7;
	printf(" Ejercicio 29: ");
	for(i=0;i<5;i++)
		printf("%d,",xv[i]);
	printf("\n\n");
	
	//ejercicio 30
	punt=xv;
	*xv=11;
	*(punt+3)=9;
	printf(" Ejercicio 30: ");
	for(i=0;i<5;i++)
		printf("%d,",xv[i]);
	printf("\n\n ");
	
	system("pause");
	return 0;
}

