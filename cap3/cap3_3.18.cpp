#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1,x2,y1,y2,z1,z2,d;
    cout << "x1: "; cin >> x1;
    cout << "x2: "; cin >> x2;
    cout << "y1: "; cin >> y1;
    cout << "y2: "; cin >> y2;
    cout << "z1: "; cin >> z1;
    cout << "z2: "; cin >> z2;

    d = sqrt(pow(x2-x1, 2.0) + pow(y2-y1, 2.0) + pow(z2-z1, 2.0));
    cout << "d: " << d << endl;
return 0;
system("pause");
}