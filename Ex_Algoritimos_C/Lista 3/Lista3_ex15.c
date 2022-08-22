#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 15 **********************

/* Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um numero inteiro informado
pelo usuario.*/

double fatorial(int num);

int main()
{
    int num=0,resultado=1;
    printf("Digite um numero inteiro para fatora-lo\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        resultado=resultado*i;
    }
    printf("O RESULTADO E: %d",resultado);

    return 0;
}
