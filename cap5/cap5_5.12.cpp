/*

5.12-) Dados dois valores inteiros, elaborar um programa para verificar se o primeiro eh multiplo do segundo.

*/

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;

    if (a % b == 0)
        cout << "'a' eh multiplo de 'b'" << endl;
    else 
        cout << "'a' nao eh multiplo de 'b'" << endl;
return 0;
}