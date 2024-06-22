Algoritmo ejercicio_20_codigo
	// Una empresa tiene 4 vendedores. cada vendedor cuando realiza una venta
	// emite una factura. se procesan los datos hasta que se ingresa un numero de
	// factura igual 0. los datos ingresados de la factura son: nº de factura, nº de
	// vendedor, monto de la factura. se desea calcular e informar:
	// a. cuantas facturas emitió cada vendedor.
	// b. total facturado por cada vendedor y el total final acumulado de los vendedores.
	cont1 <- 0
	cont2 <- 0
	cont3 <- 0
	cont4 <- 0
	total1 <- 0
	total2 <- 0
	total3 <- 0
	total4 <- 0
	Repetir
		Escribir 'Ingrese el numero de la factura (0 para terminar)'
		Leer num_fac
		Si num_fac<0 Entonces
			Escribir 'El numero no puede ser negativo'
		FinSi
	Hasta Que monto>=0
	Mientras num_fac<>0 Hacer
		Repetir
			Escribir 'Ingrese el numero de vendedor (1 a 4)'
			Leer num_vend
			Si num_vend<1 O num_vend>4 Entonces
				Escribir 'Ingrese un numero valido (1 a 4)'
			FinSi
		Hasta Que num_vend>=1 Y num_vend<=4
		Repetir
			Escribir 'Ingrese el monto de la factura'
			Leer monto
			Si monto<=0 Entonces
				Escribir 'El monto debe ser mayor a cero'
			FinSi
		Hasta Que monto>0
		Según num_vend Hacer
			1:
				cont1 <- cont1+1
				total1 <- total1+monto
			2:
				cont2 <- cont1+1
				total2 <- total2+monto
			3:
				cont3 <- cont1+1
				total3 <- total3+monto
			4:
				cont4 <- cont1+1
				total4 <- total4+monto
		FinSegún
		Repetir
			Escribir 'Ingrese el numero de la factura (0 para terminar)'
			Leer num_fac
			Si num_fac<0 Entonces
				Escribir 'El numero no puede ser negativo'
			FinSi
		Hasta Que monto>=0
	FinMientras
	total <- total1+total2+total3+total4
	Escribir 'Facturas emitidas por el vendedor 1: ', cont1
	Escribir 'Ventas acumuladas del vendedor 1: ', total1
	Escribir 'Facturas emitidas por el vendedor 2: ', cont2
	Escribir 'Ventas acumuladas del vendedor 2: ', total2
	Escribir 'Facturas emitidas por el vendedor 3: ', cont3
	Escribir 'Ventas acumuladas del vendedor 3: ', total3
	Escribir 'Facturas emitidas por el vendedor 4: ', cont4
	Escribir 'Ventas acumuladas del vendedor 4: ', total4
	Escribir 'Total de ventas acumuladas entre todos los vendedores: ', total
FinAlgoritmo
