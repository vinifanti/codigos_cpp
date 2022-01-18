/*
5.26-) Codificar em linguagem c++ o diagrama N-S (Nassi-Shneiderman) abaixo que exibe o maior de tres valores.
*/
#include <iostream>
using namespace std;
int main(){
    double a,b,c,maior;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if (a > b){
        if (a > c)
            maior = a;
        else
            maior = c;
    }
    else 
        if (b > c)
            maior = b;
        else 
            maior = c;

    cout << "maior: " << maior << endl;

return 0;
}