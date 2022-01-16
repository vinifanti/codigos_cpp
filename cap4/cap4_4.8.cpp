/*

4.8-) Qual eh o valor da variavel 'c' ao final da execucao do seguinte codigo:

int a, b, c;
a = 2;
b = 3;
c = 2 * a > 3 * b ? a + b : b; // c = b = 3

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    a = 2;
    b = 3;
    c = 2 * a > 3 * b ? a + b : b;
    cout << c << endl;

return 0;
}