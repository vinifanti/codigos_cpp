#include <iostream>
using namespace std;
int main(){
    double x;
    cout << "x: "; cin >> x;
    if (x > 0)
        cout << "Positivo\n";
    else if (x < 0)
        cout << "Negativo\n";
    else 
        cout << "Nulo\n";
return 0;
}