Algoritmo ejercicio_19_codigo
	// Construir un programa que pueda ingresar varios numeros enteros,
	// distintos de cero, de uno por vez. finaliza el ingreso de los datos al ller un
	// valor nulo. informar: a) la cantidad de valores ingresados comprendidos
	// entre pi y 3pi. b) el menor valor ingresado. 
	min <- 0
	flag <- 0
	cont <- 0
	Escribir 'Ingresar un numero (0 para terminar)'
	Leer num
	Mientras num<>0 Hacer
		Si flag==0 Entonces
			min <- num
			flag <- 1
		SiNo
			Si num<min Entonces
				min <- num
			FinSi
		FinSi
		Si num<3*pi Y num>pi Entonces
			cont <- cont+1
		FinSi
		Escribir 'Ingresar un numero (0 para terminar)'
		Leer num
	FinMientras
FinAlgoritmo
