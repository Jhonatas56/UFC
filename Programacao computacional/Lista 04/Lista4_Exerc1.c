#include <stdio.h>
#include <stdlib.h>

/*
    Nome: Jhonatas Jorge Mendonça
    Matrícula: 565263
    Data: 30/03/2024
    Ambiente de desenvolvimento: Visual Studio Code
*/

int main()
{
    /*
    a) Declare 2 variáveis inteiras, 2 variáveis reais e 2 variáveis do tipo
    caracter;
    */
    int a, b;
    float c, d;
    char e, f;

    /*
    b) Atribua valores distintos (porém válidos) a cada uma destas variáveis;
    */

    a = 10;
    b = 20;
    c = 30.5;
    d = 40.5;
    e = 'A';
    f = 'B';

    /*
    c) Faça a troca dos valores das 2 variáveis inteiras sem utilizar uma 3ª
    variável para isso;
    */

    a = a + b;
    b = a - b;

    a = e;

    /*
    d) Tente atribuir variáveis de tipos distintos (umas às outras) e observe
    / informe o que acontece quanto tenta compilar o código do programa;

    Resposta:
    - Quando um valor do tipo char é atribuído a uma variável do tipo int, o
    valor é convertido para o valor ASCII correspondente.
    - Quando um valor do tipo float é atribuído a uma variável do tipo int,
    o valor é truncado.
    - Quando um valor do tipo char é atribuído a uma variável do tipo float,
    o valor é convertido para o valor ASCII correspondente juntamente com as
    casas decimais.
    - Quando um valor do tipo int é atribuído a uma variável do tipo float o
    valor é convertido para o valor inteiro juntamente com as casas decimais.
    - Quando um valor do tipo int é atribuído a uma variável do tipo char, o
    valor é convertido para o valor ASCII correspondente.
    - Quando um valor do tipo float é atribuído a uma variável do tipo char,
    o valor é truncado e convertido para o valor ASCII correspondente.
    */

    /*
    e) Descreva o que acontece quando se tenta fazer uma operação
    inválida (como uma divisão por Zero (/0).

    Resposta:
    - Quando se tenta fazer uma operação inválida, o programa foi encerrado sem
    nenhuma mensagem de erro.
    */

    return 0;
}
