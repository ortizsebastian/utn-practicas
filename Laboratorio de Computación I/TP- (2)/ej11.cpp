#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, x=0;

    cout << "Ingrese cinco numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    if(a > 0) x++;

    if(b > 0) x++;

    if(c > 0) x++;

    if(d > 0) x++;

    if(e > 0) x++;

    cout  << "Numeros positivos: " << x << endl;

    return 0;
}
