#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 13 **********************

/*Escreva um algoritmo que leia uma sequencia de numeros do usuario e realize a soma desses
numeros. Encerre a execucao quando um numero negativo for digitado*/

int main()
{
    int i,num[10],soma=0;
    for(i=0;i<=10;i++){
        printf("Digite o %d numero\n",i+1);
        scanf("%d",&num[i]);
        soma=soma+num[i];
        if (num[i]<0){
            return 0;
        }

    }
    printf("A SOMA DOS NUMEROS FOI: %d\n",soma);
    return 0;
}
