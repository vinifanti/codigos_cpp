#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double rad, graus;
    cout << "rad: ";
    cin >> rad;
    graus = rad * 180 / M_PI;
    cout << "graus: " << graus << endl;
return 0;
system ("pause");
}