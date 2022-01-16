/*

5.5-) Dadas as notas 'a' e 'b' de um aluno, elaborar um programa para calcular e exibir a media aritmetica do aluno e a sua situacao:
    -> media >= 5 : o aluno esta Aprovado
    -> 3 <= media < 5 : o aluno devera fazer um Exame
    -> media < 3 : o aluno esta Reprovado

*/

#include <iostream>
using namespace std;

int main(){
    double a, b, m;
    cout << "nota a: "; cin >> a;
    cout << "nota b: "; cin >> b;

    m = (a + b) / 2.0;

    cout << "media: " << m << endl;

    if (m >= 5)
        cout << "Aluno Aprovado" << endl;
    if (m >= 3 && m < 5)
        cout << "Aluno deve fazer exame" << endl;
    if (m < 3)
        cout << "Aluno Reprovado" << endl;    

return 0;
}