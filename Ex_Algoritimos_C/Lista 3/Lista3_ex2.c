#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 2 **********************

/* Escreva um algoritmo que calcule o somatorio dos numeros de um intervalo informado pelo
usuario.*/

int main()
{
    int inicio=0,fim=0;

    printf("Digite o valor do numero inicial: ");
    scanf ("%d",&inicio);

    printf("Digite o valor do numero final: ");
    scanf("%d",&fim);

        int t=0;
        for (int i = inicio; i <= fim; i++)
            t+=i;
            printf("\nA soma dos numeros digitados e de: %d-%d E %d\n",inicio,fim,t);


    return 0;
}
