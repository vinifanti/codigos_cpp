#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double y, x;
    cout << "x: "; cin >> x;
    y = log(x*x) / log(3.0) + M_E + exp(M_PI) + pow(M_PI, M_E);
    cout << "y: " << y << endl;

    double x1, b, a, c;
    cout << "b: "; cin >> b;
    cout << "a: "; cin >> a;
    cout << "c: "; cin >> c;
    x1 = (-b + sqrt(b*b - 4.0*a*c)) / (2.0*a);
    cout << "x1: " << x1 << endl;

    double d, xd1, xd2, yd1, yd2;
    cout << "xd1: "; cin >> xd1;
    cout << "xd2: "; cin >> xd2;
    cout << "yd1: "; cin >> yd1;
    cout << "yd2: "; cin >> yd2;
    d = sqrt(pow((xd2 - xd1), 2.0) + pow((yd2 - yd1), 2.0));
    cout << "d: " << d << endl;

    double A, bd, cd, ad;
    cout << "bd: "; cin >> bd;
    cout << "cd: "; cin >> cd;
    cout << "ad: "; cin >> ad;
    A = acos((pow(bd, 2.0) + pow(cd, 2.0) - pow(ad, 2.0)) / (2.0 * bd * cd)) * 180.0 / M_PI;
    cout << "A: " << A << endl;

return 0;
system("pause");
}