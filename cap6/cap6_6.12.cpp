#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double salario_bruto, imposto, salario_liquido, aliquota, parc_a_ded;
    cout << "salario bruto: "; cin >> salario_bruto;
    
    if (salario_bruto < 900.0){
        aliquota = 0.0;
        parc_a_ded = 0.0;
    }
    else if (salario_bruto >= 900.0 && salario_bruto < 1500.0){
        aliquota = 0.10;
        parc_a_ded = 90.0;
    }
    else if (salario_bruto >= 1500.0 && salario_bruto < 2500.0){
        aliquota = 0.20;
        parc_a_ded = 240.0;
    }
    else if (salario_bruto >= 2500.0 && salario_bruto < 4000.0){
        aliquota = 0.30;
        parc_a_ded = 490.0;
    }
    else {
        aliquota = 0.40;
        parc_a_ded = 890.0;
        
    }

    imposto = aliquota * salario_bruto - parc_a_ded;
    salario_liquido = salario_bruto - imposto;

    //cout << "salario bruto: " << salario_bruto << endl;
    cout << "aliquota: " << aliquota << endl;
    cout << "parcela a debitar: " << parc_a_ded << endl;
    cout << "imposto: " << imposto << endl;
    cout << "salario liquido: " << salario_liquido << endl; 
    

return 0;
}