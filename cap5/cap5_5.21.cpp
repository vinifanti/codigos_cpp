/*

5.21-) Analisar o trecho de código abaixo e justificar porque, para qualquer valor de m, são exibidas as
       duas palavras "Aprovado" e "Reprovado" e não apenas uma delas.

       if (m >= 5);
            cout << "Aprovado";
       if (m < 5);
            cout << "Reprovado";


Resposta: Ocorre devido ao sinal ; no final de cada if, ou seja, o fim do bloco se deu ao colocar o ; em ambos os casos.
Dessa forma as duas palavras serão exibidas independentemente do valor de m.

*/
