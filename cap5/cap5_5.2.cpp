/*

5.2-) Elaborar um programa para calcular e exibir a media de um aluno que possui as notas descritas abaixo. Verificar tambem se o aluno foi 
aprovado (media igual ou superior a 5) ou reprovado.
-> Prova 1, com Peso 3
-> Prova 2, com Peso 5
-> Trabalho de Teoria, com Peso 1
-> Trabalho de Laboratorio, com Peso 1

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double p1, p2, tt, tl, m;
    cout << "p1: "; cin >> p1;
    cout << "p2: "; cin >> p2;
    cout << "tt: "; cin >> tt;
    cout << "tl: "; cin >> tl;

    m = (3.0 * p1 + 5.0 * p2 + tt + tl) / 10.0;
    cout << "Media: " << m << endl;

    if (m >= 5.0)
        cout << "Aluno Aprovado!" << endl;
    else
        cout << "Aluno Reprovado!" << endl;

return 0;
}