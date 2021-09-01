/*
1) Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
*/

#include <iostream>
using namespace std;

int main()
{
  int num, num2;

  cout << "Ingrese dos numeros: " << endl;
  cin >> num, num2;

  if(num%num == 0)
  {
      cout << "Son multiplos" << endl;
  }
  else
  {
      cout << "No son multiplos" << endl;
  }


  return 0;
}