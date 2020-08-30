
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int num, acum = 0, prom;

for(int i=0; i<5; i++)
    {
    cout << "ingrese numero" << endl;
    cin >> num;

    acum+=num;
    }

    prom=acum/5;

    cout << prom << endl;

  system("pause");
  return 0;
}