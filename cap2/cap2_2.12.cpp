#include <iostream>
using namespace std;

int main(){
    double b1, b2, h, area;
    cout << "b1: ";
    cin >> b1;
    cout << "b2: ";
    cin >> b2;
    cout << "h: ";
    cin >> h;
    area = (b1 + b2)*h / 2;
    cout << "area: " << area << endl;
return 0;
system ("pause");
}