Algoritmo ejercicio_13_codigo
	// Dada las edades y estaturas de 6 alumnos. se pide determinar: la edad
	// promedio, la estatura promedio, la cantidad de alumnos mayores a 10 años y
	// la cantidad de alumnos que miden más de 1.40 mt.
	suma_edad <- 0
	suma_altura <- 0
	cont_edad <- 0
	cont_altura <- 0
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Escribir 'Ingrese la edad del alumno ', i
		Leer edad
		suma_edad <- suma_edad+edad
		Si edad>10 Entonces
			cont_edad <- cont_edad+1
		FinSi
		Escribir 'Ingrese la altura del alumno ', i
		Leer altura
		suma_altura <- suma_altura+altura
		Si altura>1.40 Entonces
			cont_altura <- cont_altura+1
		FinSi
	FinPara
	prom_edad <- suma_edad/6
	prom_altura <- suma_altura/6
	Escribir 'El promedio de edad es: ', prom_edad
	Escribir 'El promedio de altura es: ', prom_altura
	Escribir 'Cantidad de alumnos mayores de 10 años: ', cont_edad
	Escribir 'Cantidad de alumnos de mas de 1.40 mts de altura: ', cont_altura
FinAlgoritmo
