#include <iostream>
using namespace std;

int main()
{
    double a,b,c,p1,p2,p3,media;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "p1: ";
    cin >> p1;
    cout << "p2: ";
    cin >> p2;
    cout << "p3: ";
    cin >> p3;
    media = (p1*a + p2*b + p3*c)/(p1 + p2 + p3);
    cout << "Media: " << media << endl;

return 0;
system ("pause");
}