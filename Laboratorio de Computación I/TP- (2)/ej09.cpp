#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Ingrese tres numeros: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    if(x>y && x>z) cout << x;

    else if(y>x&&y>z) cout << y;

    else if(z>x&&z>y) cout << z;

    return 0;
}
