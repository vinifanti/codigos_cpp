#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (fabs(x) == 2.0 || x == 0.0)
        cout << "nao existe solucao\n";
    else{
        y = x / (x*x - 4.0) + sqrt(fabs( (pow(x, 3.0) - 2.0) / 5.0 )) + 1.0 / pow(x, 2.0);
        cout << "y: " << y << endl;
    }

return 0;
}