#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Ingrese tres numeros: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    if(x==y){
        if(y==z){
            if(x==z){
                cout << "Son iguales entre si" << endl;
             }
        }
    }
    return 0;
}
