#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double p1, p2, t1, t2, total_aulas, aulas_assistidas, media, frq;
    cout << "p1: "; cin >> p1;
    cout << "p2: "; cin >> p2;
    cout << "t1: "; cin >> t1;
    cout << "t2: "; cin >> t2;
    cout << "aulas assistidas: "; cin >> aulas_assistidas;
    cout << "total de aulas: "; cin >> total_aulas;

    media = (3.0*p1 + 5.0*p2 + 1.0*t1 + 1.0*t2) / (10.0);
    frq = 100 * aulas_assistidas / total_aulas;

    cout << "media: " << media << endl << "frequencia: " << frq << "%" << endl;
return 0;
system ("pause");
}