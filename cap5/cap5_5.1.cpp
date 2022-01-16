/*

5.1-) Dadas as notas 'a' e 'b' de um aluno, com pesos respectivamente 3 e 5, elaborar um programa para calcular e exibir a media do aluno e verificar se ele foi 
aprovado ou reprovado. Considere o aluno aprovado se obtiver media igual ou superior a 5.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, m;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    m = (3.0 * a + 5.0 * b) / 8.0;

    cout << "Media = " << m << endl;

    if (m >= 5.0){
        cout << "Aluno Aprovado!" << endl;
    }
    else 
        cout << "Aluno Reprovado!" << endl;

return 0;
}