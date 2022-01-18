/*

5.17-) Uma elipse pode ser definida pela equação x^2/a^2 + y^2/b^2 = 1. Considerando-se
       a = 2 e b = 3, elaborar um programa que verifique se um ponto (x,y) dado está dentro
       da elipse, fora da elipse ou na linha da elipse.

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a = 2.0, b = 3.0;
    double x,y,r;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    r = pow(x, 2.0) / pow(a, 2.0) + pow(y, 2.0) / pow(b, 2.0);
    if (r > 1)
        cout << "Ponto (x,y) esta fora da elipse\n";
    else if (r < 1)
        cout << "Ponto (x,y) esta dentro da elipse\n";
    else
        cout << "Ponto (x,y) esta na linha da elipse";


return 0;
system("pause");
}
