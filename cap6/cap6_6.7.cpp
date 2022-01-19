#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double x,y;
    cout << "x: "; cin >> x;
    if (fabs(x) == 2.0)
        cout << "nao existe solucao\n";
    else if (x < -2.0){
        y = sqrt(fabs(x + 1.0));
        cout << "y: " << y << endl;
    }
    else if (x > -2.0 && x < 2.0){
        y = 0.0;
        cout << "y: " << y << endl;
    }
    else {
        y = sqrt(fabs(1.0 - x));
        cout << "y: " << y << endl;
    }

return 0;
}