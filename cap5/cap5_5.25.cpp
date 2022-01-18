/*
5.25-) Codificar em linguagem c++ o algoritmo abaixo que exibe o menor de tres valores
*/
#include <iostream>
using namespace std;
int main(){
    double a,b,c,menor;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if (a < b){
        if (a < c)
            menor = a;
        else
            menor = c;
    }
    else
        if (b < c)
            menor = b;
        else
            menor = c;

    cout << "menor: " << menor << endl;


return 0;
}