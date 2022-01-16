/*

4.7-) Qual o valor booleano que eh produzido nas seguintes expressoes:

a) (8 > 3) && (4 != 3) // True
b) ((4 + 2) <= 10) || (33 != (10 * 3)) // True
c) !true // False
d) !(4 > 2) || (4 > 2) // True
e) !(4 > 2) && (4 > 2) // False

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    cout <<    ((8 > 3) && (4 != 3))    << endl;
    cout <<    (((4 + 2) <= 10) || (33 != (10 * 3)))    << endl;
    cout <<    (!true)    << endl;
    cout <<    (!(4 > 2) || (4 > 2))    << endl;
    cout <<    (!(4 > 2) && (4 > 2))    << endl;

return 0;
}