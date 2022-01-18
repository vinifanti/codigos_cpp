/*

5.18-) Considere o conjunto H = H1 U H2 de pontos reais, onde:
       H1 = {(x,y) | x <= 0, y <= 0, y - x^2 + 2x + 3 >= 0}
       H2 = {(x,y) | x >= 0, y <= 0, y - x^2 - 2x + 3 >= 0}
       Elaborar um programa que verifique se um determinado ponto (x,y) pertence ao conjunto H.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y,r1,r2;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;

    r1 = y - pow(x, 2.0) + 2.0 * x + 3.0;
    r2 = y - pow(x, 2.0) - 2.0 * x + 3.0;

    if (x <= 0.0 && y <= 0.0 && r1 >= 0.0)
        cout << "(x,y) pertence a H\n";
    else if (x >= 0.0 && y <= 0.0 && r2 >= 0.0)
        cout << "(x,y) pertence a H\n";
    else
        cout << "(x,y) nao pertence a H\n";

return 0;
system("pause");
}
