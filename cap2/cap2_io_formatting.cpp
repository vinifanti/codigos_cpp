#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int x = 2;
    cout << "x = " << x << endl;
    cout << "x = " << setw(10) << x << endl;
    cout << "x = " << setw(10) << setfill('*') << x << endl;


    cout << "PI = " << M_PI << endl;
    cout << "PI = " << setprecision(8) << M_PI << endl;
    cout << "PI = " << setprecision(8) << fixed << M_PI << endl;
    cout << "PI = " << setprecision(8) << scientific << M_PI << endl;

    double y = 123.456789759865;
    cout << "y = " << y << endl;
    cout << "y = " << setprecision(12) << y << endl;
    cout << "y = " << setprecision(12) << fixed << y << endl;
    cout << "y = " << setprecision(12) << scientific << y << endl;

    int w = 123;
    cout << "w = " << setfill('.') << setw(10) << left << w << endl;
    cout << "w = " << setfill('.') << setw(10) << right << w << endl;

    int z = 255;
    cout << "z = " << hex << uppercase << showbase << z << endl;
    cout << "z = " << hex << nouppercase << showbase << z << endl;
    cout << "z = " << hex << nouppercase << noshowbase << z << endl;
    cout << "z = " << oct << showbase << z << endl;
    cout << "z = " << oct << noshowbase << z << endl;
    cout << "z = " << dec << showbase << z << endl;
return 0;
system("pause");
}