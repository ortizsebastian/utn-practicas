
/*
6) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, pos=0, neg=0;

    cin >> n;

    while(n!=0)
    {
        if(n>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
        cin >> n;
    }
    cout << "positivos " << pos << endl;
    cout << "negativos " << neg << endl;


    system("pause");
    return 0;
}