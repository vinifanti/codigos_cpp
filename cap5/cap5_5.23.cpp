/*

5.23-) Analisar o trecho de c�digo abaixo e justificar porque nenhuma palavra � exibida quando o valor de x � igual a 5.

    double x = 5;
    if (x < 0)
        cout << "Negativo";
    if (x = 0)
        cout << "Nulo";
    if (x > 0)
        cout << "Positivo";

Resposta: No segundo if, o correto eh usar == ao inv�s de =, assim o x acaba virando 0 e n�o entra na �ltimo if como era pra
entrar inicialmente.
*/

#include <iostream>
using namespace std;
int main(){
double x = 5;
    if (x < 0)
        cout << "Negativo";
    if (x = 0)
        cout << "Nulo";
    cout << x << endl;
    if (x > 0)
        cout << "Positivo";

return 0;
system("pause");
}
