#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (x <= 100){
        if (x < 0)
            y = 1.0/x;
        else 
            y = 1.0/0.0;
    }
    else 
        y = sqrt(x) / x;

    cout << "y: " << y << endl;

return 0;
}