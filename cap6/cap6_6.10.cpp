#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y,z;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    if (y <= 5.0 || x == 2.0)
        cout << "nao existe solucao\n";
    else{
        z = 1.0 / (2.0 - x) + sqrt(fabs(x)) - log(y - 5.0);
        cout << "z: " << z << endl;
    }

return 0;
}