#include<iostream>

using namespace std;

int main()
{
    int x, b1000, b500, b200, b100, r1, r2, r3;

    cout << "Ingrese la cantidad a extraer: " << endl;
    cin >> x;

    b1000 = x/1000;
    r1 = x%1000;

    b500 = r1/500;
    r2 =  r1%500;

    b200 = r2/200;
    r3 =  r2%200;

    b100 = r3/100;

	cout << "Billetes de $1000: " << b1000 << endl;
	cout << "Billetes de $500: " << b500 << endl;
    cout << "Billetes de $200: " << b200 << endl;
    cout << "Billetes de $100: " << b100 << endl;

    return 0;
}
