#include<iostream>

using namespace std;

int main()
{
    int s1, s2, s3, s4, t, p1, p2, p3 ,p4, p;
    cout << "Ingrese el ingreso de la primera semana" << endl;
    cin >> s1;
    cout << "Ingrese el ingreso de la segunda semana" << endl;
    cin >> s2;
    cout << "Ingrese el ingreso de la tercera semana" << endl;
    cin >> s3;
    cout << "Ingrese el ingreso de la cuarta semana" << endl;
    cin >> s4;

    p = (s1+s2+s3+s4)/4;
    t = s1+s2+s3+s4;
    p1 = (s1*100)/t;
    p2 = (s2*100)/t;
    p3 = (s3*100)/t;
    p4 = (s4*100)/t;

    cout << "El promedio de ingreso es de: $" << p << endl;
    cout << "La primera semana representa el: " << p1 << "%" << endl;
    cout << "La segunda semana representa el: " << p2 << "%" << endl;
    cout << "La tercera semana representa el: " << p3 << "%" << endl;
    cout << "La cuarta semana representa el: " << p4 << "%" << endl;

    return 0;
}
