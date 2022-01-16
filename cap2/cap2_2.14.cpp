#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r, area, circu;
    cout << "r: ";
    cin >> r;
    area = M_PI * r * r;
    circu = 2 * M_PI * r;
    cout << "area: " << area << endl << "circunferencia: " << circu << endl;
return 0;
system ("pause");
}