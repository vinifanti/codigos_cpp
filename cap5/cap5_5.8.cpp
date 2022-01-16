/*

5.8-) Dados os lados 'a', 'b' e 'c' de um triangulo, sendo 'a' o maior lado (nao precisa verificar), elaborar um programa para verificar se o triangulo eh:
    -> Retangulo : a^2 = b^2 + c^2
    -> Acutangulo : a^2 < b^2 + c^2
    -> Obtusangulo : a^2 > b^2 + c^2

*/

#include <iostream>
using namespace std;
int main(){
    double a, b, c;
    cout << "a (maior lado): "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if (a*a == (b*b + c*c))
        cout << "Triangulo Retangulo" << endl;
    if (a*a < (b*b + c*c))
        cout << "Triangulo Acutangulo" << endl;
    if (a*a > (b*b + c*c))
        cout << "Triangulo Obtusangulo" << endl;

return 0;
}