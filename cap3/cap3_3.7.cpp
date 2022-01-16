#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, area, r;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    area = a * b;
    r = sqrt(area / M_PI);
    cout << "r: " << r << endl;
return 0;
system("pause");
}