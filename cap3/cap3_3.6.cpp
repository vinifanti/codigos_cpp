#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1, x2, a, b, c;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    x1 = (-b + sqrt(b*b - 4.0*a*c)) / (2.0*a);
    x2 = (-b - sqrt(b*b - 4.0*a*c)) / (2.0*a);
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
return 0;
system("pause");
}