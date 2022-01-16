#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char b0_, b1_, b2_, b3_;
    int b0, b1, b2, b3;
    int decimal;
    cout << "binario: ";
    cin >> b3_ >> b2_ >> b1_ >> b0_;
    b3 = b3_ * 1 - 48;
    b2 = b2_ * 1 - 48;
    b1 = b1_ * 1 - 48;
    b0 = b0_ * 1 - 48;
    
    decimal = b0*pow(2,0) + b1*pow(2,1) + b2*pow(2,2) + b3*pow(2,3);
    cout << "decimal: " << decimal << endl;

return 0;
system("pause");
}