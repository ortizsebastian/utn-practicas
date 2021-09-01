create database tp1a
go
use tp1a
go

create table Marcas(
	IDMarca int not null primary key,
	Marca varchar(15) null, -- Se puede repetir la misma marca muchas veces
)
go

create table TipoArticulos(
	IDTipo int not null primary key,
	Tipo varchar(50) not null, -- Se puede repetir el mismo tipo muchas veces
)
go

create table Articulos(
	Codigo varchar(6) not null primary key,
	IDMarca int not null foreign key references Marcas(IDMarca),
	Descripcion varchar(30) not null,
	PrecioCompra smallmoney not null,
	PrecioVenta smallmoney not null, 
	Ganancia smallmoney not null,
	IDTipo int not null foreign key references TipoArticulos(IDTipo),
	StockActual int not null, 
	StockMinimo int not null,
	Estado bit not null
)
go

create table Provincias(
	IDProvincia int not null primary key,
	Provincia varchar(20) not null, -- Se puede repetir la misma Prov muchas veces
)
go

create table Localidades(
	CP int not null primary key,
	IDProvincia int not null foreign key references Provincias(IDProvincia),
	Localidad varchar(50) not null -- Se puede repetir la localidad muchas veces
)
go


create table Clientes(
	DNI varchar(10) not null primary key,
	Nombre varchar(15) not null,
	Apellido varchar(15) not null,
	Sexo char(1) null,
	Telefono varchar(15) null,
	Mail varchar(30) null,
	FechaAlta date not null,
	FechaNacimiento date not null,
	Direccion varchar(15) not null,
	CP int not null foreign key references Localidades(CP),
)
go

create table Vendedores(
	Legajo int not null primary key,
	DNI varchar(10) not null unique,
	FechaIngreso date not null check(FechaIngreso <= getdate()),
	Sueldo bigint not null,
	VentasRealizadas int not null,
	TotalFacturado int not null,
	Apellido varchar(15) not null,
	Nombre varchar(30) not null,
	Sexo char(1) null,
	FechaNacimiento date not null check(FechaNacimiento <= getdate()),
	Telefono varchar(50) null,
	Direccion varchar(50) not null,
	CP int not null foreign key references Localidades(CP),
)
go

create table Ventas(
	Codigo int not null primary key identity(1,1),
	Fecha date not null,
	IDCliente varchar(10) not null foreign key references Clientes(DNI), 
	IDVendedor int not null foreign key references Vendedores(Legajo),
	Pago char(1) not null check(Pago = 'E' or Pago = 'T'),
	Importe money not null
)
go

create table VentasRealizadas(
	IDVenta int not null foreign key references Ventas(Codigo),
	Articulo varchar(6) not null foreign key references Articulos(Codigo), 
	Precio smallmoney not null,
	Cantidad smallint not null,
	primary key(IDVenta,Articulo)
)
go

