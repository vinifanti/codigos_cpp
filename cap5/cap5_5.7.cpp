/*

5.7-) Dados os valores 'a' e 'b', elaborar um programa para verificar se 'a' eh o maior valor, se 'b' eh o maior valor ou se 'a' e 'b' sao iguais.

*/

#include <iostream>
using namespace std;
int main(){
    double a, b;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    if (a > b)
        cout << "a > b" << endl;
    if (a < b)
        cout << "a < b" << endl;
    if (a == b)
        cout << "a = b" << endl;
return 0;
}