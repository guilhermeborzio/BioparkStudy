#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nasc,anoatual,idade;

    printf("Digite o ano de seu nascimento\n");
    scanf ("%d",&nasc);
    printf("Digite o ano atual\n");
    scanf ("%d",&anoatual);

    idade=(anoatual-nasc);

    printf ("\nA sua idade em anos e:%d",idade);
    printf ("\nA sua idade em meses e:%d",idade*12);
    printf ("\nA sua idade em dias e:%d",idade*365);


    return 0;
}
