/*

5.21-) Analisar o trecho de c�digo abaixo e justificar porque, para qualquer valor de m, s�o exibidas as
       duas palavras "Aprovado" e "Reprovado" e n�o apenas uma delas.

       if (m >= 5);
            cout << "Aprovado";
       if (m < 5);
            cout << "Reprovado";


Resposta: Ocorre devido ao sinal ; no final de cada if, ou seja, o fim do bloco se deu ao colocar o ; em ambos os casos.
Dessa forma as duas palavras ser�o exibidas independentemente do valor de m.

*/
