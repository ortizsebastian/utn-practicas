#include<iostream>

using namespace std;

int main()
{
   int n1, n2, c1, c2;
   cout << "Ingrese la primera de sus variables: " << endl;
   cin >> n1;
   cout << "Ingrese la segunda de sus variables: " << endl;
   cin >> n2;

   c1 = n1;
   c2 = n2;
   n1 = c2;
   n2 = c1;

   cout << "Su primer variable es: " << n1 << endl;
   cout << "Su segunda variable es: " << n2;

    return 0;
}
