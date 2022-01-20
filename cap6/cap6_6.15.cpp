#include <iostream>
using namespace std;
int main(){
    double x,y;
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;


    if (x > 0 && y > 0)
        cout << "(x,y) pertencem ao primeiro quadrante\n";
    else if (x < 0 && y > 0)
        cout << "(x,y) pertencem ao segundo quadrante\n";
    else if (x < 0 && y < 0)
        cout << "(x,y) pertencem ao terceiro quadrante\n";
    else if (x > 0 && y < 0)
        cout << "(x,y) pertencem ao quarto quadrante\n";
    else if (x == 0 && y != 0)
        cout << "(x,y) pertencem ao eixo y\n";
    else if (y == 0 && x != 0)
        cout << "(x,y) pertencem ao eixo x\n";
    else 
        cout << "(x,y) pertencem a origem\n";

return 0;
}