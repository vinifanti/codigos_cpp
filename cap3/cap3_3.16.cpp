#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double J,Q,D,C;
    cout << "Q: "; cin >> Q;
    cout << "D: "; cin >> D;
    cout << "C: "; cin >> C;

    J = pow(Q, 1.85) * 10.643 * pow(D, 4.87) * pow(C, -1.85);

    cout << "J: " << J << endl;
return 0;
system("pause");
}