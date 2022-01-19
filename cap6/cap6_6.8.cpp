#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (x <= 0)
        cout << "nao existe solucao\n";
    else {
        y = (x*x + 4.0) / x + log(x) + sqrt(x + 3.0);
        cout << "y: " << y << endl;
    }

return 0;
}