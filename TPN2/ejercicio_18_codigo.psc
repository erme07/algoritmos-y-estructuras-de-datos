Algoritmo ejercicio_18_codigo
	// Ingresar c�digo de articulo y precio, hasta un c�digo de articulo igual 0,
	// determinar el c�digo de articulo del precio m�s caro y el de menor precio.
	min <- 0
	flag <- 0
	max <- 0
	Escribir 'Ingresar codigo de articulo (0 para terminar)'
	Leer codigo
	Mientras codigo<>0 Hacer
		Escribir 'Ingrese el precio'
		Leer precio
		Si flag==0 Entonces
			min <- precio
			max <- precio
			min_codigo <- codigo
			max_codigo <- codigo
			flag <- 1
		SiNo
			Si precio<min Entonces
				min <- precio
				min_codigo <- codigo
			SiNo
				Si precio>max Entonces
					max <- precio
					max_codigo <- codigo
				FinSi
			FinSi
		FinSi
		Escribir 'Ingresar codigo de articulo'
		Leer codigo
	FinMientras
FinAlgoritmo
