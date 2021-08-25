#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Ingrese tres numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a>=b&&b>=c) cout << b << endl;

    else if(b>=a&&a>=c) cout << a << endl;

    else if(b>=a&&a<=c||a>=b&&b<=c) cout << c << endl;

    return 0;
}
