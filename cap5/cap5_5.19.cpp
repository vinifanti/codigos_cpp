/*


5.19-) Analise o seguinte codigo:
    if (y==8)
    if (x==5)
    cout << "@";
    else
    cout << "#";
    cout << "$";
    cout << "&";

    Identifique onde devemos colocar chaves no código acima em cada um dos casos abaixo, para que:
    a) a saida seja "@$&" quando x=5 e y=8.
    b) a saida seja "@" quando x=5 e y=8.
    c) a saida seja "@&" quando x=5 e y=8.
    d) a saida seja "#$&" quando x=5 e y=7.

*/

#include <iostream>
using namespace std;
int main(){
    int x, y;
    x = 5; y = 8;

    // a)
    if (y==8)
    if (x==5)
    cout << "@";
    else{
    cout << "#";
    }
    cout << "$";
    cout << "&";

    cout << "\n";
    // b)
    if (y==8)
    if (x==5)
    cout << "@";
    else{
    cout << "#";
    cout << "$";
    cout << "&";
    }

    cout << "\n";
    // c)
    if (y==8)
    if (x==5)
    cout << "@";
    else{
    cout << "#";
    cout << "$";
    }
    cout << "&";


    cout << "\n";
    // d)
    y = 7;
    if (y==8){
    if (x==5)
    cout << "@";
    }
    else{
    cout << "#";
    cout << "$";
    cout << "&";
    }
return 0;
system("pause");
}
