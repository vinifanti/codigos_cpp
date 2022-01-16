#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,r;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;

    r = log(a) / log(b);

    cout << "logb(a): " << r << endl;
return 0;
system("pause");
}