#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 14 **********************

/*Faca um algoritmo escreva a diversas vezes a pergunta “Ola tudo bem?” e leia a
resposta do usuario enquanto ele responde nao. So encerre a execucao quando a resposta
for igual a “Sim”.*/

int main()
{
    int escolha=0;

    do {printf("Ola, tudo bem?\n");

    printf("DIGITE 1 PARA NAO\n");
    printf("DIGITE 2 PARA SIM\n");
        scanf("%d",&escolha);

    system("cls");

    }while (escolha==1);

    return 0;
}
