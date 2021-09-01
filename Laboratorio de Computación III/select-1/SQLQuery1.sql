-- Ejercicios de Consultas de Selección básicos. 

-- 1 Listado de todos los usuarios.
-- select * from Usuarios

-- 2 Listado de todos los datos personales.
-- select * from DatosPersonales

-- 3 Listado con nombre, apellido y domicilio de los usuarios
-- select Nombres, Apellidos, Domicilio from DatosPersonales

-- 4 Listado con nombre, extensión y tamaño de todos los archivos
-- select Nombre, Extension, Tamaño from Archivos

-- 5 Listado con nombre y extensión, tamaño expresado en megabytes y el año de creación del archivo.
-- select Nombre, Extension, Tamaño/1024 as Megabytes, Creacion from Archivos

-- 6 Listado con nombre y extensión, tamaño expresado en bytes y el IDUsuario del archivo.
-- select Nombre, Extension, Tamaño/1000 as Bytes, IDUsuario from Archivos

-- 7 Listado de todos las columnas de archivos de aquellos cuyo tamaño sea mayor a 100MB.
-- select * from Archivos where Tamaño/1024 > 100 

-- 8 Listado de todos las columnas de archivos de aquellos cuyo tamaño en megabytes sea entre 10 y 50.
-- select *, Tamaño/1024 as MB from Archivos where Tamaño/1024 between 10 and 50

-- 9 Listado de localidades ordenado por IDPais
-- select IDPais, Nombre from Localidades order by IDPais asc

-- 10 Listado de localidades de los países con IDPais ARG, ITA y CHE
-- select IDPais, Nombre from Localidades where IDPais like '[AIC]%[GAE]'

-- 11 Listado con Apellidos, Nombres, Email y Edad de los usuarios (Tiene un margen de error, corregir!)
-- select Apellidos, Nombres, Email, year(getdate()) - year(Nacimiento) as Edad from DatosPersonales

-- 12 Listado de Usuarios que no tienen celular
-- select * from DatosPersonales where Celular is null 

-- 13 Listado de Usuarios que tienen celular pero no teléfono
-- select * from DatosPersonales where Celular is not null and Telefono is null  

-- 14 Listado de Usuarios que tienen celular y domicilio
-- select * from DatosPersonales where Celular is not null and Domicilio is not null

-- 15 Listado de Usuarios con apellido y nombres, email y celular (si no tienen celular debe figurar el texto 'Sin celular' en la columna)
/*
select Apellidos, Nombres, Email,
case
	when Celular is not null then Celular 
	else 'Sin Celular' 
end as Contacto
from DatosPersonales 
*/

-- 16 Listado de Usuarios con apellido y nombres, email y celular (si no tienen celular debe figurar el teléfono y si no tienen teléfono debe figurar 'Incontactable')
/*
select Apellidos, Nombres, Email,
case
	when Celular is not null then Celular 
	when Telefono is not null then Telefono
	else 'Incontactable' 
end as Contacto
from DatosPersonales
*/

-- 17 Listado de Usuarios con apellido y nombres y el año de nacimiento
-- select Apellidos, Nombres, Nacimiento from DatosPersonales

/*
18 Listado de Usuarios con apellido y nombres y el texto:
'Generación X' si el año de nacimiento está comprendido entre 1969-1980
'Millennials' si el año de nacimiento está comprendido entre 1981-1993
'Generación Z' si el año de nacimiento está comprendido entre 1994-2010
*/

/*
select Nombres, Apellidos, 
case
	when year(Nacimiento) between 1969 and 1980 then 'Generación X' 
	when year(Nacimiento) between 1981 and 1993 then 'Millennials' 
	when year(Nacimiento) between 1994 and 2010 then 'Generación Z' 
	else 'Otra generación'
end as Generación
from DatosPersonales
*/

-- 19 Listado con el usuario más joven registrado. Debe indicar el apellido y el nombre
-- select top 1 Nombres, Apellidos, Nacimiento from DatosPersonales where Nacimiento is not null order by Nacimiento desc

-- 20 Listado con los años de nacimiento de los usuarios sin repetir
-- select distinct Nacimiento from DatosPersonales where Nacimiento is not null

-- 21 Listado de archivos con su nombre y extensión y la diferencia de días entre la modificación y la creación.
-- select Nombre, Extension, datediff(day, Creacion, Modificacion) as Diferencia from Archivos  

-- 22 Listado de usuarios que no viven en las localidades 1, 3, 5 ni 7.
-- select * from DatosPersonales where IDLocalidad not in(1,3,5,7) and IDlocalidad is not null

-- 23 Listado de archivos con estado 1, cuyo tamaño no sea entre 15 y 75 MB ni de extensión 'JPEG' o 'AVI ' y que hayan sido creados en el año 2020.
-- select * from Archivos where Estado = 1 and Tamaño/1024 not between 15 and 75 and (Extension <> 'JPEG' or Extension <> 'AVI') and year(Creacion) = 2020

-- 24 Listado de usuarios que vivan en un domicilio que contenga las palabras 'Virrey' o 'Doctora'
-- select * from DatosPersonales where Domicilio is not null and (Domicilio like '%Virrey%' or Domicilio like '%Doctora%')

-- 25 Listado de usuarios que registren un Email que contenga el dominio 'yahoo' o 'hotmail'.
-- select * from DatosPersonales where Email is not null and (Email like '%yahoo%' or Email like '%hotmail%')

-- 26 Listado de usuarios cuyo nombre de usuario comience y termine con vocal
-- select * from Usuarios where Nombreusuario like '[aeiou]%[aeiou]'



















