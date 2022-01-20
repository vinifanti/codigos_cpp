#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double salario, imposto;
    cout << "salario: "; cin >> salario;
    if (salario < 100.0)
        imposto = 0.0;
    else if (salario >= 100.0 && salario < 500.0)
        imposto = 0.10 * salario;
    else if (salario >= 500 && salario < 2000)
        imposto = 0.18 * salario;
    else 
        imposto = 0.25 * salario;
    
    cout << "imposto a pagar: " << imposto << endl;

return 0;
}