#include <iostream>
using namespace std;

int main()
{
    int x, r;
    cout << "Ingrese el importe de su venta" << endl;
    cin >> x;

    if(x<100) r=x*0.95;

    else if(x>100&&x<500) r=x*0.90;

    else if(x>500) r=x*0.85;

    cout << r;
    return 0;
}
