#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1,x2,x3,y1,y2,y3,a,b,c,sp,p,area;
    cout << "x1: "; cin >> x1;
    cout << "x2: "; cin >> x2;
    cout << "x3: "; cin >> x3;
    cout << "y1: "; cin >> y1;
    cout << "y2: "; cin >> y2;
    cout << "y3: "; cin >> y3;

    a = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
    b = sqrt(pow(x3 - x2, 2.0) + pow(y3 - y2, 2.0));
    c = sqrt(pow(x3 - x1, 2.0) + pow(y3 - y1, 2.0));

    sp = (a + b + c) / 2.0;
    p = 2.0*sp;
    area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "area: " << area << endl;
    cout << "perimetro: " << p << endl;
return 0;
system("pause");
}