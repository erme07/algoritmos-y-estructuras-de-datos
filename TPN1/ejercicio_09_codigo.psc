Algoritmo ejercicio_09_codigo
	// Desarrolle un algoritmo que permita determinar el área y volumen de un
	// cilindro dado su radio y su altura.
	Escribir 'Area y volumen del cilindro'
	Escribir 'Ingrese la altura'
	Leer altura
	Escribir 'Ingrese el radio'
	Leer radio
	area <- (2*pi*radio*altura)+(2*pi*radio^2)
	volumen <- pi*radio^2*altura
	Escribir 'Area del cilindro: ', area
	Escribir 'Volumen del cilindro: ', volumen
FinAlgoritmo
