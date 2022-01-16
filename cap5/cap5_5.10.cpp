/*

5.10-) Dado um valor inteiro, elaborar um programa para verificar se o mesmo eh par ou impar.

*/

#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "x: "; cin >> x;

    if (x % 2 == 0)
        cout << "numero par" << endl;
    else 
        cout << "numero impar" << endl;

return 0;
}
