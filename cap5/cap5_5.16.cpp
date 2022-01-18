/*

5.16-) Dadas as coordenadas (x,y) de 2 pontos no Plano Cartesiano, elaborar um programa
       para verificar qual dos dois pontos est� mais pr�ximo da origem dos eixos (0,0)

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,y1,x2,y2,d1,d2;
    cout << "x1: "; cin >> x1;
    cout << "y1: "; cin >> y1;
    cout << "x2: "; cin >> x2;
    cout << "y2: "; cin >> y2;

    d1 = sqrt(pow(x1,2.0) + pow(y1, 2.0));
    d2 = sqrt(pow(x2, 2.0) + pow(y2, 2.0));

    if (d1 < d2)
        cout << "(x1,y1) esta mais proximo da origem do que (x2, y2) \n";
    else
        cout << "(x2,y2) esta mais proximo da origem do que (x1, y1) \n";

return 0;
system("pause");
}
