#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Ingrese los tres lados de su triangulo: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    if(x==y){
        if(y==z){
            if(x==z){
                cout << "Equilatero" << endl;
            }
        }
    }
    if(x!=y){
        if(y!=z){
            if(x!=z){
                cout << "Escaleno" << endl;
            }
        }
    }
    if(x==y||y==z||z==x){
            if(x!=y||y!=z||z!=x){
             cout << "Isoceles" << endl;
            }
    }

    return 0;
}
