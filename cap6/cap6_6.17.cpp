#include <iostream>
using namespace std;
int main (){
    int valor, notas5, notas1;
    cout << "valor: "; cin >> valor;
    if (valor > 60 || valor < 0){
        cout << "Erro";
    }
    else {
        if ((valor / 5) > 10){
            notas5 = 10;
            notas1 = (valor - 50);
        }
        else {
            notas5 = valor / 5;
            notas1 = valor % 5;
        }
    }
    cout << "notas de 5: " << notas5 << endl;
    cout << "notas de 1: " << notas1 << endl;


return 0;
}