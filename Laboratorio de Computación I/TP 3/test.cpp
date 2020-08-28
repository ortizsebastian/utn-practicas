
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
int num, impar = 0, dupla;

for(int i=1; i<6; i++)
{
    cin >> num;

    if(!num%2==0)
    {
        impar++;
    }
}

dupla = impar/2;

    cout << dupla << endl;

  system("pause");
  return 0;
}