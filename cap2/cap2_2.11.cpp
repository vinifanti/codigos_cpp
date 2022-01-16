#include <iostream>
using namespace std;

int main(){
    double a,b,area,perimetro;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    area = a*b;
    perimetro = 2*(a + b);
    cout << "Area: " << area << endl << "Perimetro: " << perimetro << endl;
return 0;
system ("pause");
}