Algoritmo ejercicio_23_codigo
	// Determine el menor valor de 5 números, indicando además a qué orden
	// pertenece. considere que el menor valor puede repetirse. por ejemplo: si los
	// números ingresados fueran: 14, 19, 14, 16, 15. los resultados deben ser: el
	// menor valor ingresado fue 14 y corresponden al primer número, tercer número.
	pos1 <- 0
	pos2 <- 0
	pos3 <- 0
	pos4 <- 0
	pos5 <- 0
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'Ingrese un numero'
		Leer num
		Si i==1 Entonces
			min <- num
			pos1 <- 1
		SiNo
			Si num<min Entonces
				min <- num
				Si i==2 Entonces
					pos1 <- 0
					pos2 <- 1
				SiNo
					Si i==3 Entonces
						pos1 <- 0
						pos2 <- 0
						pos3 <- 1
					SiNo
						Si i==4 Entonces
							pos1 <- 0
							pos2 <- 0
							pos3 <- 0
							pos4 <- 1
						SiNo
							pos1 <- 0
							pos2 <- 0
							pos3 <- 0
							pos4 <- 0
							pos5 <- 1
						FinSi
					FinSi
				FinSi
			SiNo
				Si num==min Entonces
					Si i==2 Entonces
						pos2 <- 1
					SiNo
						Si i==3 Entonces
							pos3 <- 1
						SiNo
							Si i==4 Entonces
								pos4 <- 1
							SiNo
								pos5 <- 1
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'El menor valor es: ', min
	Escribir 'Posiciones: '
	Si pos1<>0 Entonces
		Escribir '1'
	FinSi
	Si pos2<>0 Entonces
		Escribir '2'
	FinSi
	Si pos3<>0 Entonces
		Escribir '3'
	FinSi
	Si pos4<>0 Entonces
		Escribir '4'
	FinSi
	Si pos5<>0 Entonces
		Escribir '5'
	FinSi
FinAlgoritmo
