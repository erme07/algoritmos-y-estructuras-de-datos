Algoritmo ejercicio_17_codigo
	// Desarrolle un algoritmo que le permita determinar de una lista de números:
	// a. cuantos están entre el 50 y el 75, ambos inclusive.
	// b. cuantos son mayores de 80.
	// c. cuantos son menores de 30.
	// el algoritmo finaliza cuando se ingresa el número 0.
	cont50_75 <- 0
	cont80 <- 0
	cont30 <- 0
	Escribir 'Ingrese un numero (0 para terminar)'
	Leer num
	Mientras num<>0 Hacer
		Si num<30 Entonces
			cont30 <- cont30+1
		SiNo
			Si num>80 Entonces
				cont80 <- cont80+1
			SiNo
				Si num>=50 Y num<=75 Entonces
					cont50_75 <- cont50_75+1
				FinSi
			FinSi
		FinSi
		Escribir 'Ingrese un numero (0 para terminar)'
		Leer num
	FinMientras
	Escribir 'Cantidad de numeros mayores a 80: ', cont80
	Escribir 'Cantidad de numeros menores a 30: ', cont30
	Escribir 'Cantidad de numeros entre 50 y 75, incluidos: ', cont50_75
FinAlgoritmo
