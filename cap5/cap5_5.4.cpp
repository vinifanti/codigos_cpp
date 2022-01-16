/*

5.4-) Uma disciplina possui em seu criterio de avaliacao, 4 notas com pesos 1, 1, 3 e 5, respectivamente. Dadas as notas de um aluno nesta disciplina e 
      tambem a quantidade de aulas dadas e a quantidade de aulas assistidas pelo aluno, elaborar um programa para calcular a media e a frequencia do aluno 
      e verificar se ele foi aprovado ou reprovado. Um aluno so eh aprovado se tiver media igual ou superior a 5.0 e frequencia igual ou superior a 0.75 (75%)

*/

#include <iostream>
using namespace std;
int main(){

    double n1,n2,n3,n4,m,ad,aa,f;
    cout << "n1: "; cin >> n1;
    cout << "n2: "; cin >> n2;
    cout << "n3: "; cin >> n3;
    cout << "n4: "; cin >> n4;
    cout << "aulas dadas: "; cin >> ad;
    cout << "aulas assistidas: "; cin >> aa;

    m = (n1 + n2 + 3.0*n3 + 5.0*n4) / 10.0;
    f = aa / ad;

    cout << "Media: " << m << endl;
    cout << "Frequencia: " << f << endl;

    if (m >= 5.0 && f >= 0.75)
        cout << "Aluno Aprovado" << endl;
    else
        cout << "Aluno Reprovado" << endl;

return 0;
}