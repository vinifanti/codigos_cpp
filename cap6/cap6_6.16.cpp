#include <iostream>
using namespace std;
int main(){
    int n, dezenas, unidades;
    cout << "n: "; cin >> n;
    if (n < 0 || n > 99){
        cout << "Erro! Range aceito: 0 a 99.\n\n";
    }
    else {
        dezenas = n / 10;
        unidades = (n % 10);
        cout << dezenas << " dezenas e " << unidades << " unidades\n";
    }

return 0;
}