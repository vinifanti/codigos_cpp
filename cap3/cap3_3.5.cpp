#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double y, x;
    cout << "x: "; cin >> x;
    y = log(x*x)/log(3.0) + M_E + exp(M_PI) + pow(M_PI, M_E);
    cout << "y: " << y << endl;
return 0;
system("pause");
}