#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (x == 5.0)
        cout << "nao existe funcao definida\n";
    else {
        y = (2.0 * x*x - 3.0) / (x - 5.0);
        cout << "y: " << y << endl;
    }

return 0;
}