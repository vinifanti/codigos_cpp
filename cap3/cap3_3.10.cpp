#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,sp,per,area;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    sp = (a + b + c) / 2.0;
    per = 2.0*sp;
    area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));

    cout << "perimetro: " << per << endl;
    cout << "area: " << area << endl;

return 0;
system("pause");
}