-- Cada Alumno puede comprar mas de 1 Curso y cada Curso puede ser obtenido por mas de 1 Persona.

-- Relacion NaN: Se crea la tabla Curso con el ID como clave primaria.
-- Se crea la tabla Persona con el DNI como clave primaria.
-- Se relaciona ambas tablas con una tercera tabla auxiliar, la cual tendra el IDDNI de la Persona
-- como clave foranea y tambien el IDCurso como clave foranea.


create database Relacion_NaN
go
use Relacion_NaN

-- Tabla Cursos, la cual tendra los datos del Curso.
create table Cursos(
	ID tinyint not null primary key identity(100,1),
	Profesor varchar(20) not null,
	Costo money not null check(Costo > 0),
	Horas tinyint not null check(Horas > 0 and Horas < 200),
)
go

-- Tabla Personas, la cual tendra los datos de la cuenta.
create table Personas(
	DNI varchar(20) not null primary key,
	Usuario varchar(20) not null unique,
	Pass varchar(20) not null,
)
go

-- Tabla auxiliar con la fecha de alta en la cual la Persona compro dicho Curso.
create table Alumnos_Cursos(
	Codigo bigint not null primary key identity(1,1),
	IDDni varchar(20) not null foreign key references Personas(DNI),
	IDCurso tinyint not null foreign key references Cursos(ID),
	Alta date not null check(Alta <= getdate()),
)