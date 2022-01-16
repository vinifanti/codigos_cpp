#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double rad, grados;
    cout << "rad: ";
    cin >> rad;
    grados = rad * 400 / (2 * M_PI);
    cout << "grados: " << grados << endl;
return 0;
system ("pause");
}