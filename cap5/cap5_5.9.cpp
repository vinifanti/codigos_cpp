/*

5.9-) Dado um valor qualquer, elaborar um programa para verificar se o mesmo eh inteiro. Utilize o conceito de 'type casting' visto no capitulo 2.

*/

#include <iostream>
using namespace std;

int main(){
    float a = 10.3;

    cout << a << endl;
    cout << int(a) << endl;
    cout << (a == int(a)) << endl;

    if (a != int(a))
        cout << "Nao eh inteiro" << endl;
    else 
        cout << "Eh inteiro" << endl;
    

return 0;
}