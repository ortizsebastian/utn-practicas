/*

22) Dada una lista de 10 n�meros informar la cantidad de duplas de n�meros impares
consecutivos.
Ejemplo: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5. En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por
lo tanto se informar� que hay 4 duplas de n�meros impares consecutivos.

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int num, cantImpar = 0, dupla;

for(int i=1; i<6; i++)
{
    cin >> num;

    if(!num%2==0)
    {
        cantImpar++;
    }
}

dupla = impar/2;

    cout << dupla << endl;

  system("pause");
  return 0;
}