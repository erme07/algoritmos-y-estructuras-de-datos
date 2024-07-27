Algoritmo estacion_de_peaje
	Repetir
		Escribir "Categorias aceptadas:  1 = moto  2 = auto  3 = camioneta  4 = camion"
		Escribir "Ingrese la categoria del vehiculo: "
		Leer categoria
		Escribir "Dias:  1 = Lunes  2 = Martes  3 = Miercoles  4 = Jueves  5 = Viernes  6 = Sabado  7 = Domingo"
		Escribir "Ingrese el dia de la semana: "
		Leer dia
		Escribir "Horario:  a = Pico  b = No pico"
		Escribir "Ingrese el horario: "
		Leer horario
		Segun categoria Hacer
			1:
				base<-5
			2:
				base<-10
			3:
				base<-15
			4:
				base<-20
		Fin Segun
		Si dia>=1 Y dia <=5 Entonces
			Si horario=='a' Entonces
				recargo<-base*0.2
			SiNo
				recargo<-0
			FinSi
		SiNo
			Si dia==7 Entonces
				recargo<-base*0.1
			SiNo
				recargo<-0
			FinSi
		FinSi
		importe<-base+recargo
		Escribir 'importe a cobrar: ', importe
		Escribir 'El conductor paga con: '
		Leer pago_realizado
		vuelto<-pago_realizado-importe
		Escribir 'El vuelto a entregar es de: ', vuelto
		Escribir 'Desea continuar vendiendo?'
		Escribir 's = Si     n = No'
		Leer eleccion
	Hasta Que eleccion=='n'
	Escribir 'Cantidad de pases de autos en hora pico', cant_autospico
	Escribir 'total de pases vendidos: ', total_pases
	Escribir 'Total recaudado: ', total_recaudado
FinAlgoritmo
