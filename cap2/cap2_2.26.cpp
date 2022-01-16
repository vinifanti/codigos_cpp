#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, t, g;
    cout << "a: "; cin >> a;
    cout << "t: "; cin >> t;
    g = 2.0 * a / (t * t);
    cout << "g: " << g << "m/s2" << endl;
return 0;
system ("pause");
}