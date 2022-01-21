#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;
    cout << "x: "; cin >> x;
    if(x >= 0.0){
        y = sqrt(x);
        cout << "y: " << y << endl;
    }
    else 
        cout << "y: Nao existe funcao definida\n";
return 0;
}