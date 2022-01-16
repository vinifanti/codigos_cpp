#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int preco, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    cout << "Preco produto: ";
    cin >> preco;
    nota100 = preco / 100;
    preco = preco % 100;
    nota50 = preco / 50;
    preco = preco % 50;
    nota20 = preco / 20;
    preco = preco % 20;
    nota10 = preco / 10;
    preco = preco % 10;
    nota5 = preco / 5;
    preco = preco % 5;
    nota2 = preco / 2;
    preco = preco % 2;
    nota1 = preco / 1;

    cout << "Notas de 100: " << nota100 << endl;
    cout << "Notas de 50: " << nota50 << endl;
    cout << "Notas de 20: " << nota20 << endl;
    cout << "Notas de 10: " << nota10 << endl;
    cout << "Notas de 5: " << nota5 << endl;
    cout << "Notas de 2: " << nota2 << endl;
    cout << "Notas de 1: " << nota1 << endl;
return 0;
system ("pause");
}