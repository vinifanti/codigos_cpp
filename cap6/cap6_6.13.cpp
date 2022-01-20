#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;

    if (a == b && a == c){
        cout << "Triangulo Equilatero\n";
    }
    else if (a != b && a != c && b != c){
        cout << "Triangulo Escaleno\n";
    }
    else 
        cout << "Triangulo Isosceles\n";

return 0;
}