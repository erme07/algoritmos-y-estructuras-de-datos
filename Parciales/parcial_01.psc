Algoritmo parcial_01
	recaudacion <- 0
	flag <- 0
	acumdesc <- 0
	acumimporte <- 0
	contc <- 0
	conte <- 0
	conth <- 0
	contl <- 0
	Repetir
		Repetir
			Escribir 'Ingrese nombre'
			Leer nombre
			Escribir 'Ingrese tipo'
			Leer tipo
			Escribir 'Ingrese importe sin iva'
			Leer importe
			Escribir 'cantidad'
			Leer cant
			Escribir 'Tiene descuento? s/n'
			Leer tienedesc
			Si tienedesc=='s' Entonces
				desc <- importe*cant*0.1
			SiNo
				desc <- 0
			FinSi
			acumdesc <- acumdesc+desc
			acumimporte <- acumimporte+(importe*cant)
			Si flag==0 Entonces
				max <- cant
				maxnombre <- nombre
			SiNo
				Si cant>max Entonces
					max <- cant
					maxnombre <- nombre
				FinSi
			FinSi
			Según tipo Hacer
				'l':
					contl <- contl+cant
				'c':
					contc <- contc+cant
				'e':
					conte <- conte+cant
				'h':
					conth <- conth+cant
			FinSegún
			Escribir 'producto: ', nombre, ' importesin iva: ', importe*cant, 'Descuento: ', desc
			Escribir 'ingresar mas productos?'
			Leer rta
		Hasta Que rta=='n'
		Escribir 'Productor con mas unidades: ', maxnombre
		Escribir 'cantidad de tipo c: ', contc
		Escribir 'cantidad de tipo l: ', contl
		Escribir 'cantidad de tipo h: ', conth
		Escribir 'cantidad de tipo e: ', conte
		Escribir 'el valor total de compra sin iva es: ', acumimporte
		iva <- (acumimporte-acumdesc)*0.21
		Escribir 'total del iva: ', iva
		Escribir 'total descuentos aplicados: ', acumdesc
		total <- acumimporte-acumdesc+iva
		Escribir 'valor total de la compra: ', total
		recaudacion <- recaudacion+total
		Escribir 'Cerrar caja?'
		Leer rta
	Hasta Que rta=='s'
	Escribir 'Recaudacion total del dia: ', recaudacion
FinAlgoritmo
