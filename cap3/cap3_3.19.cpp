#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,d,soma1,soma2,sub1,sub2,mult1,mult2,divi1,divi2;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "d: "; cin >> d;
    cout << "z1: " << a << " + " << b << "i" << endl;
    cout << "z2: " << c << " + " << d << "i" << endl;

    soma1 = a + c;
    soma2 = b + d;
    sub1 = a - c;
    sub2 = b - d;
    mult1 = a*c - b*d;
    mult2 = a*d + b*c;
    divi1 = (a*c + b*d) / (c*c + d*d);
    divi2 = (b*c - a*d) / (c*c + d*d);

    cout << "z1 + z2: " << soma1 << " + " << soma2 << "i" << endl;
    cout << "z1 - z2: " << sub1 << " + " << sub2 << "i" << endl;
    cout << "z1 * z2: " << mult1 << " + " << mult2 << "i" << endl;
    cout << "z1 / z2: " << divi1 << " + " << divi2 << "i" << endl;
return 0;
system("pause");
}