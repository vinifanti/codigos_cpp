#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, d5, d4, d3, d2, d1;
    cout << "numero: "; cin >> num;
    d5 = num / 10000;
    d4 = (num % 10000) / 1000;
    d3 = (num % 1000) / 100;
    d2 = (num % 100) / 10;
    d1 = (num % 10) / 1;

    cout << d5 << endl << d4 << endl << d3 << endl << d2 << endl << d1 << endl;

return 0;
system("pause");
}