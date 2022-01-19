#include <iostream>
#include <cmath>
using namespace std;
int main (){

    double x, y;
    cout << "x: "; cin >> x;
    if (x <= 2){
        if (x < 2)
            y = sqrt(fabs(x));
        else
            y = 0.0;
    }
    else
        y = log10(x);

    cout << "y: " << y << endl;

return 0;
}