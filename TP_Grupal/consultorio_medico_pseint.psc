Funci�n importe <- cobroConsulta(importe)
	Definir rta Como Cadena
	Definir obra_s, pago, vuelto Como Entero
	Escribir ' Tiene obra social? s/n: '
	Leer rta
	Si rta='s' Entonces
		Escribir ' Ingrese el numero de obra social: '
		Leer obra_s
		importe <- importe/2
	FinSi
	Escribir ' Importe a pagar: $', importe
	Repetir
		Escribir ' El cliente paga con: $'
		Leer pago
		Si pago<importe Entonces
			Escribir 'El pago recibido es insuficiente'
		FinSi
	Hasta Que pago>=importe
	vuelto <- pago-importe
	Escribir ' Vuelto: $', vuelto
FinFunci�n

Funci�n verCronograma(cronograma)
	Escribir ' '
	Escribir '                                  TURNOS DISPONIBLES'
	Escribir '          ==================================================================='
	Escribir '          |   LUN.   |   MAR.   |   MIER.  |   JUE.   |   VIE.   |   SAB.   |'
	Escribir '          ==================================================================='
	Escribir ' '
	Escribir '          ==================================================================='
	Escribir '          |  Odonto. |  Neumo.  |  Odonto. |  Neumo.  |  Oftal.  |  Neumo.  |'
	Escribir '          ==================================================================='
	Escribir '          |          |          |          |          |          |          |'
	Escribir '  Ma�ana  |    ', cronograma[1,1], '    |    ', cronograma[1,2], '    |    ', cronograma[1,3], '    |    ', cronograma[1,4], '    |    ', cronograma[1,5], '    |    ', cronograma[1,6], '    |'
	Escribir '          |          |          |          |          |          |          |'
	Escribir '          ==================================================================='
	Escribir '          |  Trauma. |  Clinica |  Trauma. |  Clinica |  Derma.  |  Clinica |'
	Escribir '          ==================================================================='
	Escribir '          |          |          |          |          |          |          |'
	Escribir '  Tarde   |    ', cronograma[2,1], '    |    ', cronograma[2,2], '    |    ', cronograma[2,3], '    |    ', cronograma[2,4], '    |    ', cronograma[2,5], '    |    ', cronograma[2,6], '    |'
	Escribir '          |          |          |          |          |          |          |'
	Escribir '          ==================================================================='
FinFunci�n

Funci�n importe <- cobrarEstudiosAnalisis
	Definir opc, importe, obra_s, pago, vuelto Como Entero
	Definir rta Como Cadena
	Repetir
		Escribir 'ESTUDIOS Y ANALISIS'
		Escribir 'Diagnostico por imagen        Laboratorio'
		Escribir '[0] Ecografia                 [3] Analisis de orina'
		Escribir '[1] Radiografia               [4] Analisis de sangre'
		Escribir '[2] Tomografia'
		Escribir 'Seleccione una opcion: '
		Leer opc
		Si opc<0 O opc>4 Entonces
			Escribir 'Error, opcion invalida!'
		FinSi
	Hasta Que opc>=0 Y opc<=4
	Seg�n opc Hacer
		0:
			importe <- 2000
		1:
			importe <- 2500
		2:
			importe <- 4000
		3:
			importe <- 2000
		4:
			importe <- 2500
	FinSeg�n
	Escribir 'Tiene obra social? s/n: '
	Leer rta
	Si rta='s' Entonces
		Escribir 'Ingrese el numero de obra social: '
		Leer obra_s
		importe <- importe/2
	FinSi
	Escribir 'El importe a pagar es: $', importe
	Repetir
		Escribir 'El cliente paga con: $'
		Leer pago
		Si pago<importe Entonces
			Escribir 'El pago es insuficiente'
		FinSi
	Hasta Que pago>=importe
	vuelto <- pago-importe
	Escribir 'El vuelto es de $', vuelto
FinFunci�n

Funci�n escribirHistoriaClinica(nro_hclinica,hclinica,nombres,apellidos,pos)
	Definir flag, num, i, poshclinic Como Entero
	Definir nomb, apell, observacion Como Cadena
	flag <- 0
	Repetir
		Escribir 'ESCRIBIR EN LA HISTORIA CLINICA'
		Escribir 'Ingrese el numero de historia clinica: '
		Leer num
		Para i<-1 Hasta pos Hacer
			Si nro_hclinica[i]=num Entonces
				flag <- 1
				poshclinic <- i
			FinSi
		FinPara
		Si flag=0 Entonces
			Escribir 'Error, el numero ingresado no existe en la base de datos'
		FinSi
	Hasta Que flag=1
	Escribir 'Historia clinica numero: ', num
	Escribir 'Paciente: ', nombres[poshclinic], ' ', apellidos[poshclinic]
	Escribir 'Escriba una observacion medica y presione ENTER'
	Escribir 'Observacion: '
	Leer observacion
	hclinica[poshclinic] <- observacion
FinFunci�n

Funci�n verHistoriaClinica(nro_hclinica,hclinica,nombres,apellidos,pos)
	Definir flag, num, i, poshclinic Como Entero
	flag <- 0
	Repetir
		Escribir 'LEER HISTORIA CLINICA'
		Escribir 'Ingrese el numero de historia clinica'
		Leer num
		Para i<-1 Hasta pos Hacer
			Si nro_hclinica[i]=num Entonces
				flag <- 1
				poshclinic <- i
			FinSi
		FinPara
		Si flag=0 Entonces
			Escribir 'Error, el numero ingresado no existe en la base de datos'
		FinSi
	Hasta Que flag=1
	Escribir 'Historia clinica nro. ', num
	Escribir 'Paciente ', nombres[poshclinic], ' ', apellidos[poshclinic]
	Escribir 'Observacion: ', hclinica[poshclinic]
FinFunci�n

Funci�n num <- abrirHistoriaClinica(nro_hclinica,nombres,apellidos,edades,dni,generos,pos)
	Definir num Como Entero
	Definir nombre, apellido, genero Como Cadena
	Definir edad, documento Como Entero
	Escribir 'ABRIENDO HISTORIA CLINICA'
	Escribir 'Ingrese el nombre'
	Leer nombre
	nombres[pos] <- nombre
	Escribir 'Ingrese el apellido'
	Leer apellido
	apellidos[pos] <- apellido
	Repetir
		Escribir 'Ingrese el genero m/f: '
		Leer genero
		generos[pos] <- genero
		Si genero<>'m' Y genero<>'f' Entonces
			Escribir 'Ingrese un genero valido'
		FinSi
	Hasta Que genero='m' O genero='f'
	Repetir
		Escribir 'Ingrese la edad'
		Leer edad
		edades[pos] <- edad
		Si edad<1 O edad>120 Entonces
			Escribir 'Ingrese una edad valida'
		FinSi
	Hasta Que edad>0 Y edad<120
	Escribir 'Ingrese el DNI'
	Leer documento
	dni[pos] <- documento
	num <- pos+99
	nro_hclinica[pos] <- num
	// pos <- pos+1 en c incrementariamos la posicion pasada como referencia
	Escribir ' '
	Escribir 'Numero de Historia clinica generada: ', num
FinFunci�n

Funci�n diaMaxRecaudacion (crono)
	Definir i, j, dia, recMax Como Entero
	dia <- 1
	recMax <- crono[1,1]+crono[2,1]
	Para i<-1 Hasta 6 Con Paso 1 Hacer
		Si crono[1,i]+crono[2,i]<recMax Entonces
			recMax <- crono[1,i]+crono[2,i]
			dia <- i
		FinSi
	FinPara
	Escribir 'Dia con mayor recaudacion: '
	Seg�n dia Hacer
		1:
			Escribir 'Lunes'
		2:
			Escribir 'Martes'
		3:
			Escribir 'Mi�rcoles'
		4:
			Escribir 'Jueves'
		5:
			Escribir 'Viernes'
		6:
			Escribir 'S�bado'
	FinSeg�n
FinFunci�n

Funci�n espMasSolicitada (crono)
	Definir i, j, posMinI, posMinJ, min Como Entero
	posMinI <- 1
	posMinJ <- 1
	min <- crono[1,1]
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Para j<-1 Hasta 6 Con Paso 1 Hacer
			Si crono[i,j]<min Entonces
				min <- crono[i,j]
				posMinI <- i
				posMinJ <- j
			FinSi
		FinPara
	FinPara
	Escribir 'Especialidad mas solicitada: '
	Seg�n posMinJ Hacer
		1:
			Si posMinI=1 Entonces
				Escribir 'Odontolog�a - Lunes (Ma�ana)'
			SiNo
				Escribir 'Traumatolog�a - Lunes (Tarde)'
			FinSi
		2:
			Si posMinI=1 Entonces
				Escribir 'Neumonolog�a - Martes (Ma�ana)'
			SiNo
				Escribir 'Medicina Cl�nica - Martes (Tarde)'
			FinSi
		3:
			Si posMinI=1 Entonces
				Escribir 'Odontolog�a - Mi�rcoles (Ma�ana)'
			SiNo
				Escribir 'Traumatolog�a - Mi�rcoles (Tarde)'
			FinSi
		4:
			Si posMinI=1 Entonces
				Escribir 'Neumonolog�a - Jueves (Ma�ana)'
			SiNo
				Escribir 'Medicina Cl�nica - Jueves (Tarde)'
			FinSi
		5:
			Si posMinI=1 Entonces
				Escribir 'Oftalmolog�a - Viernes (Ma�ana)'
			SiNo
				Escribir 'Dermatolog�a - Viernes (Tarde)'
			FinSi
		6:
			Si posMinI=1 Entonces
				Escribir 'Neumonolog�a - S�bado (Ma�ana)'
			SiNo
				Escribir 'Medicina Cl�nica - S�bado (Tarde)'
			FinSi
	FinSeg�n
FinFunci�n

Funci�n recaudacionTotal (rec)
	Escribir 'La recaudacion total hasta el moento es:', rec
FinFunci�n

Funci�n disponibilidad <- verificarDisponibilidad (cronograma,dia,hora)
	Definir disponibilidad Como Entero
	Si cronograma[hora,dia]>0 Entonces
		disponibilidad <- 1
	SiNo
		disponibilidad <- 0
		Escribir 'No hay turnos disponibles para el dia y hora seleccionados'
	FinSi
FinFunci�n

Funci�n importe <- asignarTurno (crono,num_hclinic,nombres,apellidos,edades,dni,generos,pos)
	Definir i, num, flag, importe, hora, dia, disp Como Entero
	Definir especialidad, rta Como Cadena
	Definir obra_s, pago, vuelto Como Entero
	flag <- 0
	importe <- 0
	Repetir
		Escribir ' PROGRAMADOR DE TURNOS'
		Escribir ' Posee historia clinica? s/n: '
		Leer rta
		Si rta='n' Entonces
			num <- abrirHistoriaClinica(num_hclinic,nombres,apellidos,edades,dni,generos,pos)
		SiNo
			Si rta='s' Y pos=1 Entonces
				Escribir ' No hay historias clinicas registradas...'
				Escribir ' ABRIR HISTORIA CLINICA'
				num <- abrirHistoriaClinica(num_hclinic,nombres,apellidos,edades,dni,generos,pos)
			SiNo
				Si rta='s' Entonces
					Repetir
						Escribir 'Ingrese numero de historia clinica: '
						Leer num
						flag <- 0
						Para i<-1 Hasta pos-1 Con Paso 1 Hacer
							Si num_hclinic[i]=num Entonces
								flag <- 1
							FinSi
						FinPara
						Si flag=0 Entonces
							Escribir ' Error, el numero ingresado no existe'
						FinSi
					Hasta Que flag=1
				SiNo
					Escribir 'Ingrese una respuesta no valida!'
				FinSi
			FinSi
		FinSi
	Hasta Que rta='s' O rta='n'
	Repetir
		verCronograma(crono)
		Escribir ' ESPECIALIDADES'
		Escribir ' [o] Odontologia    [f] Oftalmologia    [t] Traumatologia'
		Escribir ' [d] Dermatologia   [m] Medicina clinica   [n] Neumonologia'
		Escribir ' Seleccione la especialidad: '
		Leer especialidad
		Seg�n especialidad Hacer
			'o':
				hora <- 1
				Escribir ' Fechas para Odontologia:'
				Escribir '[1] Lunes(ma�ana)  [3] Miercoles(ma�ana)'
				Escribir ' Seleccione la fecha: '
				Leer dia
				importe <- 6000
			'f':
				hora <- 1
				dia <- 5
				Escribir ' Fecha para Oftalmologia: Viernes(ma�ana)'
				importe <- 6000
			't':
				hora <- 2
				Escribir 'Fechas para Traumatologia:'
				Escribir '[1] Lunes(tarde)  [3] Miercoles(tarde)'
				Escribir 'Seleccione la fecha: '
				Leer dia
				importe <- 5000
			'd':
				hora <- 2
				dia <- 5
				Escribir 'Fecha para Dermatologia: Viernes(tarde)'
				importe <- 6000
			'm':
				hora <- 2
				Escribir 'Fechas para Medicina Clinica:'
				Escribir '[1] Martes(tarde)  [4] Jueves(tarde)  [6] Sabado(tarde)'
				Escribir 'Seleccione la fecha: '
				Leer dia
				importe <- 5000
			'n':
				hora <- 1
				Escribir 'Fechas para Neumonologia:'
				Escribir '[1] Martes(ma�ana)  [4] Jueves(ma�ana)  [6] Sabado(ma�ana)'
				Escribir 'Seleccione la fecha: '
				Leer dia
				importe <- 5000
		FinSeg�n
		disp <- verificarDisponibilidad(crono,dia,hora)
	Hasta Que disp=1
	importe <- cobroConsulta(importe)
	crono[hora,dia]<-crono[hora,dia]-1
	Escribir 'Turno reservado con exito'
	Escribir 'Paciente; ', nombres[num-100+1], ' ', apellidos[num-100+1]
	Escribir 'DNI: ', dni[num-100+1]
FinFunci�n

Funci�n rol <- login
	Definir pass, user Como Cadena
	Definir rol Como Cadena
	Repetir
		Escribir ' INICIAR SESION'
		Escribir ' Ingrese usuario: '
		Leer user
		Escribir ' Ingrese contrase�a: '
		Leer pass
		Si user='recepcionista' Y pass='0000' Entonces
			rol <- 'r'
		SiNo
			Si user='gerente' Y pass='1234' Entonces
				rol <- 'g'
			SiNo
				Si user='medico' Y pass='abcd' Entonces
					rol <- 'm'
				SiNo
					Escribir 'Error, usuario o contrase�a incorrecta'
					rol <- 'x'
				FinSi
			FinSi
		FinSi
	Hasta Que rol<>'x'
FinFunci�n

Funci�n seleccion <- menu_r
	Repetir
		Escribir 'MENU'
		Escribir '[1] Programar turno'
		Escribir '[2] Ver cronograma'
		Escribir '[3] Abrir historia clinica'
		Escribir '[4] Cobrar estudios y analisis'
		Escribir '[5] Cerrar sesion'
		Escribir 'Seleccione una opcion: '
		Leer opcion
		Si opcion<1 O opcion>5 Entonces
			Escribir 'Error, ingrese una opcion valida'
		FinSi
	Hasta Que opcion>0 Y opcion<6
	seleccion <- opcion
FinFunci�n

Funci�n seleccion <- menu_g
	Repetir
		Escribir 'MENU'
		Escribir '[1] Ver recaudacion total'
		Escribir '[2] Especialidades mas solicitada'
		Escribir '[3] Dia de mayor recaudacion'
		Escribir '[4] Cerrar sesion'
		Escribir 'Seleccione una opcion: '
		Leer opcion
		Si opcion<1 O opcion>4 Entonces
			Escribir 'Error, ingrese una opcion valida'
		FinSi
	Hasta Que opcion>0 Y opcion<5
	seleccion <- opcion
FinFunci�n

Funci�n seleccion <- menu_m
	Repetir
		Escribir 'MENU'
		Escribir '[1] Ver cronograma'
		Escribir '[2] Ver historia clinica'
		Escribir '[3] Escribir en historia linica'
		Escribir '[4] Cerrar sesion'
		Escribir 'Seleccione una opcion: '
		Leer opcion
		Si opcion<1 O opcion>4 Entonces
			Escribir 'Error, ingrese una opcion valida'
		FinSi
	Hasta Que opcion>0 Y opcion<5
	seleccion <- opcion
FinFunci�n

Algoritmo consultorio_medico_pseint
	// Perfiles
	// user: gerente         pass: 1234
	// user: recepcionista   pass: 0000
	// user: medico          pass: abcd
	Definir nombres, apellidos, hclinica, generos Como Cadena
	Definir espacios, edades, dni, nro_hclinica, cronograma, recaudacion, cont_obrasocial, posicion, opc, aux Como Entero
	espacios <- 50
	recaudacion <- 0
	posicion <- 1
	cont_obrasocial <- 0
	Dimensionar nombres(espacios), apellidos(espacios), hclinica(espacios), generos(espacios)
	Dimensionar edades(espacios), dni(espacios), cronograma(2,6), nro_hclinica(espacios)
	// Inicializar la matriz cronograma con 12 turnos en cada posici�n
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		Para j<-1 Hasta 6 Con Paso 1 Hacer
			cronograma[i,j]<-12
		FinPara
	FinPara
	Para i<-1 Hasta espacios Con Paso 1 Hacer
		hclinica[i]="-- VACIO --"
	FinPara
	Repetir
		rol <- login()
		Si rol='m' Entonces
			Repetir
				opc <- menu_m()
				Seg�n opc Hacer
					1:
						verCronograma(cronograma)
					2:
						verHistoriaClinica(nro_hclinica,hclinica,nombres,apellidos,posicion)
					3:
						escribirHistoriaClinica(nro_hclinica,hclinica,nombres,apellidos,posicion)
					4:
						rol <- 'x'
				FinSeg�n
			Hasta Que rol='x'
		SiNo
			Si rol='g' Entonces
				Repetir
					opc <- menu_g()
					Seg�n opc Hacer
						1:
							recaudacionTotal(recaudacion)
						2:
							espMasSolicitada(cronograma)
						3:
							diaMaxRecaudacion(cronograma)
						4:
							rol <- 'x'
					FinSeg�n
				Hasta Que rol='x'
			SiNo
				Si rol='r' Entonces
					Repetir
						opc <- menu_r()
						Seg�n opc Hacer
							1:
								Repetir
									recaudacion <- recaudacion+asignarTurno(cronograma,nro_hclinica,nombres,apellidos,edades,dni,generos,posicion)
									Si nro_hclinica[posicion]=posicion+99 Entonces
										posicion <- posicion+1
									FinSi
									Escribir 'Desea seguir asignando turnos? s/n: '
									Leer rta
								Hasta Que rta='n'
							2:
								verCronograma(cronograma)
							3:
								aux <- abrirHistoriaClinica(nro_hclinica,nombres,apellidos,edades,dni,generos,posicion)
								posicion <- posicion+1
							4:
								recaudacion <- recaudacion+cobrarEstudiosAnalisis()
							5:
								rol <- 'x'
						FinSeg�n
					Hasta Que rol='x'
				FinSi
			FinSi
		FinSi
	Hasta Que rol<>'x'
FinAlgoritmo
