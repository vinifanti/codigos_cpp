/*

4.4-) Quais sao os valores das variaveis a, b e c ao final da execucao do seguinte codigo:

int a, b;
bool c;
a = 2;
b = 3;
c = (a++ == b); // False


*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a, b;
    bool c;

    a = 2;
    b = 3;
    c = (a++ == b); // Compara primeiro depois incrementa o 'a'. Para dar True precisaria trocar para ++a

    cout << c << endl;

return 0;
}