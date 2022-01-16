/*

5.11-) Dado um valor inteiro, elaborar um programa para verificar se o mesmo eh multiplo de 10.

*/

#include <iostream>
using namespace std;
int main(){
    long int x;
    cout << "x: "; cin >> x;

    if (x % 10 == 0)
        cout << "Eh multiplo de 10" << endl;
    else 
        cout << "Nao eh multiplo de 10" << endl;

return 0;
}