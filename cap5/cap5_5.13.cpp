/*

5.13-) Dados os lados 'a', 'b' e 'c' de um triangulo, elaborar um programa para verificar se o triangulo realmente existe. Dica: um triangulo existe se 
cada um de seus lados eh menor que a soma dos outros dois. 

*/

#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if ((a < b + c) && (b < a + c) && (c < a + b))
        cout << "O Triangulo existe" << endl;
    else
        cout << "O Triangulo nao existe" << endl;
return 0;
}

