/*

5.20-) Elaborar um programa para ler três valores reais diferentes de zero e determinar se eles podem ser os
       lados de um triângulo retângulo

*/

#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if ((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (b*b + a*a))){
        cout << "Formam um triangulo retangulo\n";
    }
    else
        cout << "Nao formam um triangulo retangulo\n";

return 0;
system("pause");
}
