#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double Mn, C, i, n;
    cout << "C: "; cin >> C;
    cout << "i: "; cin >> i;
    cout << "n: "; cin >> n;

    Mn = C * pow(1.0 + i, n);
    cout << "Mn: " << Mn << endl;
system("pause");
return 0;
}