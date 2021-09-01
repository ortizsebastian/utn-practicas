-- Se concidera que cada Ciudad tiene solo 1 tabla de datos Demograficos, y lo mismo de forma inversa.

-- Relacion 1 a 1: ID de la tabla Ciudad como clave primaria y dentro de la tabla Demografia
-- se realizo la relacion con la clave foranea IDCiudad que hace referencia al ID de la tabla Ciudad.

create database Relacion_1a1
go
use Relacion_1a1
go

-- Tabla de Ciudades
create table Ciudad(
	ID tinyint not null primary key identity(100,1),
	Nombre varchar(20) not null,
)
go

-- Tabla de datos demograficos de cada Ciudad
create table Demografia(
	IDCiudad tinyint not null primary key foreign key references Ciudad(ID),
	Habitantes int not null,
	Latitud varchar(15) not null,
	Longitud varchar(15) not null,
	Pais varchar(20) not null,
	Superficie int not null
)
go

-- Se agregaron dos restricciones a la tabla Demografia

alter table Demografia
add constraint CHK_Habitantes check(Habitantes > 0)

alter table Demografia
add constraint CHK_Superficie check(Superficie > 0)