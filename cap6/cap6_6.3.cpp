#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (x <= -10.0)
        y = exp(x) + log(fabs(x - 10.0));
    else
        y = pow(x, 2.0) + sqrt(fabs(x));
    
    cout << "y: " << y << endl;

return 0;
}