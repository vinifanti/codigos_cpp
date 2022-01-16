#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r, volume;
    cout << "r: ";
    cin >> r;
    volume = 4/3*M_PI*pow(r, 3);
    cout << "volume: " << volume << endl;
return 0;
system ("pause");
}