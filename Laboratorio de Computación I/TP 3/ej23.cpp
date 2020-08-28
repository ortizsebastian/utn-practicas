/*

23) Se ingresan los datos de los 10 artículos que vende una empresa. Cada registro
contiene:
- Número de artículo (1 a 10)
- Precio Unitario
- Clase de artículo (1, 2 o 3)
Se pide determinar e informar:
a) El número del artículo más caro para cada una de las 3 clases. Se listan 3 resultados, uno
para cada una de las 3 clases.
b) La clase de artículo con el mayor precio promedio.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int numArt, preUnit, claseArt;

for(int i=1; i<10; i++)
{
    cout << "Ingrese Número de artículo:" << endl;
    cin numArt;

    cout << "Ingrese Precio Unitario:" << endl;
    cin preUnit;

    cout << "Ingrese Clase de artículo:" << endl;
    cin claseArt;

}

  system("pause");
  return 0;
}