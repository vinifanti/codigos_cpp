#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (x > 2){ 
        y = x / (x - 2.0);
        cout << "y: " << y << endl;
    }
    else if (x == 2)
        cout << "nao existe funcao definida\n";
    else {
        y = pow(x, 2.0) + 1.0;
        cout << "y: " << y << endl;
    }
return 0;
}