#include <iostream>
using namespace std;
int main(){
    double x,y;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    while(x == 0.0 || y == 0.0){
        cout << "\nEntrada precisa ser diferente de zero\n\n";
        cout << "x: "; cin >> x;
        cout << "y: "; cin >> y;
    };

    if (x > 0 && y > 0)
        cout << "(x,y) pertencem ao primeiro quadrante\n";
    else if (x < 0 && y > 0)
        cout << "(x,y) pertencem ao segundo quadrante\n";
    else if (x < 0 && y < 0)
        cout << "(x,y) pertencem ao terceiro quadrante\n";
    else 
        cout << "(x,y) pertencem ao quarto quadrante\n";


return 0;
}