#include <iostream>
using namespace std;

int main(){
    double p1, p2, tt, tl, media;

    cout << "Nota prova 1: ";
    cin >> p1;
    cout << "Nota prova 2: ";
    cin >> p2;
    cout << "Nota trabalho de teoria: ";
    cin >> tt;
    cout << "Nota trabalho de lab: ";
    cin >> tl;
    media = (3*p1 + 5*p2 + tt + tl)/10;
    cout << "Media: " << media << endl;

return 0;
system ("pause");
}