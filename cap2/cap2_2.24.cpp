#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double c, f, k;
    cout << "f: ";
    cin >> f;
    c = 5.0 * (f - 32.0) / 9.0;
    k = c + 273.0;
    // cout << "c: " << c << endl;
    cout << "k: " << k << endl;
return 0;
system ("pause");
}