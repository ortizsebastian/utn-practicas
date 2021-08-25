#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Ingrese tres numeros: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a<=b&&b<=c) cout << a << b << c << endl;

    else if(b<=a&&a<=c) cout << b << a << c << endl;

    else if(b<=a&&a>=c) cout << b << c << a << endl;

    else if(c<=a&&a<=b) cout << c << a << b << endl;

    return 0;
}
