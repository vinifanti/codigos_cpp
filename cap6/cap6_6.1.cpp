#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double x,y;
    cout << "x: "; cin >> x;
    if (x <= 10){
        if (x < -10)
            y = log(fabs(x)) + 3.0;
        else
            y = pow(x, 5.0);
    }
    else
        y = sqrt(x - 9.0);

    cout << "y: " << y << endl;
        

return 0;
}