/*

4.3-) Eh certo dizer que o fragmento de programa abaixo sempre exibira como resposta o numero 3? Por que?

int a, b, c;
cin >> a;
b = a + 1;
a %= 2;
b %= 2;
c = 3 * (a + b);
cout << c << endl;


Resposta: Sim, a resposta sempre retornara 3. Isso ocorre pois tanto a variavel 'a' quanto a 'b' sempre quando uma retornar 1 a outra retorna 0 e vice-versa,
            entao a variavel 'c' sempre retorna 3.
*/