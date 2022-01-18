/*


5.24-) Analisar o trecho de código abaixo e justificar porque a palavra "Diferentes" é exibida.

    double a = 3, b = 3, c = 3;
    if (a == b == c)
        cout << "Iguais";
    else
        cout << "Diferentes";


Resposta: Isso ocorre porque ao comparar a e b (a == b) é retornado o valor booleano True e esse valor é comparado com o
valor c (True == c) que retorna False, assim o programa entra no Else e exibe a palavra "Diferentes".

*/
