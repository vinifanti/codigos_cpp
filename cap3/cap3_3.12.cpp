#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c, A, B, C;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    A = acos((b*b + c*c - a*a)/(2.0*b*c))*180.0/M_PI;
    B = acos((a*a + c*c - b*b)/(2.0*a*c))*180.0/M_PI;
    C = acos((a*a + b*b - c*c)/(2.0*a*b))*180.0/M_PI;

    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;

return 0;
system("pause");
}