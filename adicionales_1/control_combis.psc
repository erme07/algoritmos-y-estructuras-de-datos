Algoritmo control_combis
	gasto_totalA <- 0
	gasto_totalB <- 0
	kmTotal <- 0
	Para n<-1 Hasta 7 Con Paso 1 Hacer
		Según n Hacer
			1:
				dia <- 'Lunes'
			2:
				dia <- 'Martes'
			3:
				dia <- 'Miercoles'
			4:
				dia <- 'Jueves'
			5:
				dia <- 'Viernes'
			6:
				dia <- 'Sabado'
			7:
				dia <- 'Domingo'
		FinSegún
		Escribir 'Dia ', dia
		Escribir 'COMBI A'
		Escribir 'ingrese los kilometros recorridos:'
		Leer kmA
		Si n==1 Entonces
			mayorDist <- kmA
			mayorDist_combi <- 'A'
			mayorDist_dia <- dia
		SiNo
			Si kmA>mayorDist Entonces
				mayorDist <- kmA
				mayorDist_combi <- 'A'
				mayorDist_dia <- dia
			FinSi
		FinSi
		kmTotal <- kmTotal+kmA
		Escribir 'Ingrese el importe por llenado de tanque:'
		Leer tanqueA
		Escribir 'Tuvo gastos de peaje? S/N'
		Leer peaje
		Si peaje=='S' Entonces
			Escribir 'Ingrese gasto de peajes:'
			Leer peaje_totalA
		SiNo
			peaje_totalA<-0
		FinSi
		Escribir 'COMBI B'
		Escribir 'ingrese los kilometros recorridos:'
		Leer kmB
		Si kmB>mayorDist Entonces
			mayorDist <- kmB
			mayorDist_combi <- 'B'
			mayorDist_dia <- dia
		FinSi
		kmTotal <- kmTotal+kmB
		Escribir 'Ingrese el importe por llenado de tanque:'
		Leer tanqueB
		Escribir 'Tuvo gastos de peaje? s/n'
		Leer peaje
		Si peaje=='s' Entonces
			Escribir 'Ingrese gasto de peajes:'
			Leer peaje_totalB
		SiNo
			peaje_totalB<-0
		FinSi
		gasto_diarioA <- tanqueA+peaje_totalA
		gasto_totalA <- gasto_totalA+gasto_diarioA
		gasto_diarioB <- tanqueB+peaje_totalB
		gasto_totalB <- gasto_totalB+gasto_diarioB
		gasto_diarioTotal <- gasto_diarioA+gasto_diarioB
		promedioGastoPorkm <- gasto_diarioTotal/kmTotal
		Escribir 'Gasto total del dia ',n ,' en ambas combis: ', gasto_diarioTotal
		Escribir 'Promedio de gasto por kilometro: ', promedioGastoPorkm
	FinPara
	Escribir 'Mayor distancia recorrida: ', mayorDist
	Escribir 'Dia que se recorrio la mayor distancia: ', mayorDist_dia
	Escribir 'Combi que recorrio la mayor distancia: ', mayorDist_combi
	Escribir 'Total gastado por la combi A:', gasto_totalA
	Escribir 'Total gastado por la combi B: ', gasto_totalB
FinAlgoritmo
