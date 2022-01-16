/* Elaborar um programa para calcular e exibir a media aritmetica de dois valores quaisquer. */

#include <iostream>
using namespace std;
int main(){
    double a,b,m;

    cout << "Insira a primeira nota: ";
    cin >> a;
    cout << "Insira a segunda nota: ";
    cin >> b;
    m = (a + b) / 2;
    cout << "Media: " << m << endl;
}


