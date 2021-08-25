#include<iostream>

using namespace std;

int main()
{
    int m1, m2, m3, total;
    float p1, p2, p3;

    cout << "Ingrese la cant vendida para la marca M1: " << endl;
    cin >> m1;
    cout << "Ingrese la cant vendida para la marca M2: " << endl;
    cin >> m2;
    cout << "Ingrese la cant vendida para la marca M3: " << endl;
    cin >> m3;

    total = m1 + m2 + m3;
    p1 = (m1*100)/total;
    p2 = (m2*100)/total;
    p3 = (m3*100)/total;

    cout << "La marca M1 representa el " << p1 << "%" << endl;
    cout << "La marca M2 representa el " << p2 << "%" << endl;
    cout << "La marca M3 representa el " << p3 << "%" << endl;

    return 0;
}
