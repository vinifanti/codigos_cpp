#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if (x > 0)
        cout << "nao existe funcao definida\n";
    else
        {
            if (x < 0)
                y = 5.0*x*x + 3.0*x - 1.0;
            else
                y = 0.0;
            cout << "y: " << y << endl;
        }

return 0;
}