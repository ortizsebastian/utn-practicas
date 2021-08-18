/*
1) Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
*/

#include <iostream>
using namespace std;

int main()
{
  int num;

  cout << "Ingrese un numero: " << endl;
  cin >> num;

  if(num>0)
  {
      cout << "Positivo" << endl;
  }
  else if(num<0)
  {
      cout << "Negativo" << endl;
  }
  else
  {
      cout << "Cero" << endl;
  }


  return 0;
}