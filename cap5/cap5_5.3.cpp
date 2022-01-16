/*
5.3-) Dados a media final e a frequencia de um aluno, elaborar um programa para verificar se ele foi aprovado ou reprovado. Um aluno so eh aprovado se 
      tiver media igual ou superior a 5.0 e frequencia igual ou superior a 0.75 (isto eh, 75%).

*/

// Solucao 1:
#include <iostream>
using namespace std;
int main(){
    double m, f;
    cout << "Media: "; cin >> m;
    cout << "Frequencia: "; cin >> f;

    if (m >= 5.0 && f >= 0.75)
        cout << "Aluno Aprovado\n";
    else
        cout << "Aluno Reprovado\n";
return 0;
}

// Solucao 2:
#include <iostream>
using namespace std;
int main(){
    double m, f;
    cout << "Media: "; cin >> m;
    cout << "Frequencia: "; cin >> f;

    if(m < 5.0 || f < 0.75)
        cout << "Aluno Reprovado\n";
    else
        cout << "Aluno Aprovado\n";
return 0;
}

// Solucao 3:
#include <iostream>
using namespace std;
int main(){
    double m, f;
    cout << "Media: "; cin >> m;
    cout << "Frequencia: "; cin >> f;

    if (m < 5.0 && f >= 0.75)
        cout << "Aluno reprovado por media" << endl;
    if (m >= 5.0 && f < 0.75)
        cout << "Aluno reprovado por frequencia" << endl;
    if (m < 5.0 && f < 0.75)
        cout << "Aluno reprovado por media e por frequencia" << endl;
    if (m >= 5.0 && f >= 0.75)
        cout << "Aluno aprovado" << endl;
}