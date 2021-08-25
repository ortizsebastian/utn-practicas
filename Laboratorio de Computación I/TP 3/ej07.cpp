#include <iostream>
using namespace std;

/*7) Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son
positivos, cuántos son negativos, y cuántos iguales a cero.
*/

int main()
{
    int x, pos=0, neg=0, cero=0;

    for(int i=0; i<10; i++){
        cout << "Ingrese numero: " << endl;
        cin >> x;
        if(x>0) pos++;
        else if(x<0) neg++;
        else cero++;
    }

    cout << "Cantidad de Positivos: " << pos << endl;
    cout << "Cantidad de Negativos: " << neg << endl;
    cout << "Cantidad de Ceros: " << cero << endl;

    return 0;
}
