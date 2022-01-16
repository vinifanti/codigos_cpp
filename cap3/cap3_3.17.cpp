#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double u,ix,b,bb,h,hh,nume,deno;
    cout << "b: "; cin >> b;
    cout << "b': "; cin >> bb;
    cout << "h: "; cin >> h;
    cout << "h': "; cin >> hh;

    nume = 1.0 - (1 - bb/b) * (1 - hh/h);
    deno = 1.0 - (1 - bb/b) * pow(1 - hh/h, 3.0);
    u = sqrt(12.0 * nume/deno);
    ix = h / u;

    cout << "ix: " << ix << endl;

return 0;
system("pause");
}