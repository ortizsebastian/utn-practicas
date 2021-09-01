create database tp2
go
use tp2
go

create table Alumnos(
	DNI varchar(15) not null primary key,
	Nombre varchar(15) not null,
	Apellido varchar(15) not null
)
go

create table Materias(
	IDMateria int not null primary key,
	Nombre varchar(15) not null
)
go

create table Carreras(
	IDCarrera int not null primary key,
	Nombre varchar(15) not null
)
go

create table Examenes(
	Fecha date not null check(Fecha<=getdate()),
	Nota int not null check(Nota>0 and Nota<=10),
	IDAlumno varchar(15) not null foreign key references Alumnos(DNI),
	IDCarrera int not null foreign key references Carreras(IDCarrera),
	IDMateria int not null foreign key references Materias(IDMateria),
	primary key(Fecha,IDMateria)
)
go
