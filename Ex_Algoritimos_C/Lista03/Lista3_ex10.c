#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 10 **********************

/* Escreva um algoritmo que leia 20 numeros informados pelo usuário e exiba quantos numeros sao
pares*/

int main()
{
    int i,num=0,pares=0;
    for(i=0;i<20;i++){
    printf("Digite o %d numero\n",i+1);
    scanf("%d",&num);
    if (num%2==0){pares=pares+1;}
    }
        printf("%d numeros sao pares",pares);



    return 0;
}
