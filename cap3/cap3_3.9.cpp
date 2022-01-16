#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y,d;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;

    d = sqrt(pow(x - 0.0, 2.0) + pow(y - 0.0, 2.0));

    cout << "distancia: " << d << endl;

return 0;
system("pause");
}