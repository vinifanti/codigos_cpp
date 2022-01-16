/*

5.6-) Dado um valor x, elaborar um programa para verificar se x eh positivo, negativo ou nulo.

*/

#include <iostream>
using namespace std;
int main(){
    double x;
    cout << "x: "; cin >> x;

    if (x > 0.0)
        cout << "positivo" << endl;
    if (x < 0.0)
        cout << "negativo" << endl;
    if (x == 0.0)
        cout << "nulo" << endl;

return 0;
}