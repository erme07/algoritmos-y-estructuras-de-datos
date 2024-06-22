Algoritmo ejercicio_24_codigo
	// Un negocio de perfumería efectúa descuentos en sus ventas según el importe de estas
	// con la siguiente escala:
	// menor a 50 pesos el 3.5 MOD 
	// entre 50 y 150 pesos el 10 MOD 
	// entre 151 y 300 pesos el 20 MOD 
	// mayor a 300 pesos el 25 MOD 
	// confeccionar un programa que solicite un precio original e informe: el descuento
	// a efectuar y precio neto a cobrar con mensajes aclaratorios. se debe contemplar
	// que se puede ingresar varios importes y para finalizar se ingresa un valor negativo
	Escribir 'Ingrese el precio original (valor negativo para terminar)'
	Leer precio_original
	Mientras precio_original>=0 Hacer
		Si precio_original<50 Y precio_original<>0 Entonces
			descuento <- precio_original*0.035
		SiNo
			Si precio_original>=50 Y precio_original<=150 Entonces
				descuento <- precio_original*0.1
			SiNo
				Si precio_original>=151 Y precio_original<=300 Entonces
					descuento <- precio_original*0.2
				SiNo
					Si precio_original>300 Entonces
						descuento <- precio_original*0.25
					FinSi
				FinSi
			FinSi
		FinSi
		precio_final <- precio_original-descuento
		Escribir 'Descuento: ', descuento
		Escribir 'Precio neto: ', precio_final
		Escribir 'Ingrese el precio original (valor negativo para terminar)'
		Leer precio_original
	FinMientras
FinAlgoritmo
