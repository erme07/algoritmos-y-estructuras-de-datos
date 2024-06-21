Algoritmo ejercicio_10_codigo
	// En una olimpiada de tiro al blanco se llega a un acuerdo entre los
	// participantes para que el puntaje obtenido sea calculado en base al puntaje
	// original (0 a 10) alcanzado en el tiro efectuado, multiplicado por un factor
	// según la siguiente tabla:
	// Puntaje original     Factor
	// 0				 0
	// de 1 a 5			 6
	// de 6 a 8			 9
	// de 9 a 10			10
	// Para un tiro realizado determine el puntaje alcanzado aplicando el factor
	// que le corresponde.
	Escribir 'Ingrese el puntaje original'
	Leer puntaje_original
	Si puntaje_original==0 Entonces
		factor <- 0
	SiNo
		Si puntaje_original>=1 Y puntaje_original<=5 Entonces
			factor <- 6
		SiNo
			Si puntaje_original>=6 Y puntaje_original<=8 Entonces
				factor <- 9
			SiNo
				Si puntaje_original==9 O puntaje_original==10 Entonces
					factor <- 10
				FinSi
			FinSi
		FinSi
	FinSi
	puntaje_final <- puntaje_original*factor
	Escribir 'Puntaje final: ', puntaje_final
FinAlgoritmo
