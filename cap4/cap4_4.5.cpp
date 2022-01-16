/*

4.5-) Quais sao os valores das variaveis a, b e c ao final da execucao do seguinte codigo:

int a,b;
bool c;

a = 2;
b = 3;
c = (++a == b); // True

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b;
    bool c;

    a = 2;
    b = 3;
    c = (++a == b); // Incrementa primeiro depois compara com 'b'.

    cout << c << endl;

return 0;
}