/*

5.15-) A resolucao de um sistema de equacoes lineares algebricas (SELA) 2x2 é ilustrada abaixo.
        Eq1. ax + by = c
        Eq2. dx + ey = f,   x = deltaX/delta, y = deltaY/delta
        onde delta = ae - bd, deltaX = ce - bf, deltaY = af - cd

        Elabore um programa para ler o conjunto de coeficientes (a,b,c,d,e e f) e escrever
        a solucao do sistema (x e y). Observe que:

        -> se delta = 0, deltaX = 0 e deltaY = 0, então existem infinitas soluções;
        -> se delta = 0 e (deltaX != 0 ou deltaY != 0) então não existe solução;
        -> se delta != 0 existe uma única solução (vista acima)
*/

#include <iostream>
using namespace std;
int main(){
    double a,b,c,d,e,f,x,y,delx,dely,del;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "d: "; cin >> d;
    cout << "e: "; cin >> e;
    cout << "f: "; cin >> f;

    del = a * e - b * d;
    delx = c * e - b * f;
    dely = a * f - c * d;

    if (del == 0 && delx == 0 && dely == 0)
        cout << "Existem infinitas solucoes \n";
    else if (del == 0 && (delx == 0 || dely == 0))
        cout << "Não existe solucao \n";
    else {
        x = delx / del;
        y = dely / del;

        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
return 0;
system("pause");
}
