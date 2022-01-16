/*

4.6-) Qual o valor booleano que eh produzido nas seguintes expressoes:

a) (8 + 3) <= (4 * 3) // True
b) 33 != 10*3 // True
c) 8 == (10 - 2) // True
d) (9 % 3) >= 0 // True
e) 1 < 2 // True

*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

cout << ((8 + 3) <= (4 * 3)) << endl;
cout << (33 != 10*3) << endl;
cout <<  (8 == (10 - 2)) << endl;
cout << ((9 % 3) >= 0) << endl;
cout << (1 < 2) << endl;

return 0;
}