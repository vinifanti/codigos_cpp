/*

5.14-) Dados os lados 'a' e 'b' de um retangulo e o raio 'r' de um circulo, calcular e exibir a area
       e o perimetro das duas figuras, indicando qual a figura de menor area e qual a figura de maior
       perimetro.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,r,area_ret,area_cir,per_ret,per_cir;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "r: "; cin >> r;

    area_ret = a * b;
    area_cir = M_PI * r * r;
    per_ret = 2 * (a + b);
    per_cir = 2 * M_PI * r;

    cout << "Area retangulo: " << area_ret << endl;
    cout << "Area circulo: " << area_cir << endl;
    cout << "Perimetro retangulo: " << per_ret << endl;
    cout << "Perimetro circulo: " << per_cir << endl;

    if (area_ret >= area_cir)
        cout << "Area do retangulo eh maior" << endl;
    else
        cout << "Area do circulo eh maior" << endl;

    if (per_ret <= per_cir)
        cout << "Perimetro do retangulo eh menor" << endl;
    else
        cout << "Perimetro do circulo eh menor" << endl;

return 0;
system ("pause");
}
