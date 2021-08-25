-- Existe 1 Proveedor para cada Cliente, sin embargo cada Proveedor puede tener mas de 1 Cliente.

-- Relacion 1 a N: Dentro de la tabla Cliente se utilizo como clave Primaria el ID, el cual
-- hace referencia como clave foranea a la tabla Proveedor con IDCliente. 

create database Relacion_1aN
go
use Relacion_1aN
go

-- Tabla Clientes.

create table Clientes(
	ID int not null primary key identity(1,100), 
	DNI varchar(20) not null unique, 
	Direccion varchar(20) not null,
	Antiguedad date not null check(Antiguedad <= getdate()), 
)
go

-- Tabla Proveedores de Internet.

create table Proveedores(
	IDCliente int not null foreign key references Cliente(ID),
	Empresa varchar(20) check(Empresa = 'Telecentro' or Empresa = 'Fibertel' or Empresa = 'Claro'),
	Cuota money null check(Cuota > 0),
	Velocidad tinyint not null check(Velocidad = 50 or Velocidad = 100 or Velocidad = 200)
)
go
