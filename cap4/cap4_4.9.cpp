/*

4.9-) Codificar uma linha de programa para que a variavel 'c' seja o dobro da variavel 'a' se ela for
      maior que a veriavel 'b', caso contrario a variavel 'c' devera ser o triplo de 'b'.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

int a, b, c;

cout << "a: "; cin >> a;
cout << "b: "; cin >> b;
cout << "c: "; cin >> c;

c = c > b ? 2*a : 3*b;

cout << c << endl;

return 0;
}