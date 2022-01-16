#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y, r;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    r = exp(y * log(x));
    cout << "x elevado a y: " << r << endl;

return 0;
system("pause");
}