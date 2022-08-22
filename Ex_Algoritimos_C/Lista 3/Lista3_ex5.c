#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 5 **********************

/* Escreva um algoritmo que leia 10 números informados pelo usuario e calcule a soma desses
numeros*/

int main()
{
    int num[10];
    int soma=0;
    for(int i=0;i<10;i++){
        printf("Digite o %d%c numero: \n", i+1,167);
        scanf("%d", &num[i]);
        soma+=num[i];
    }
    printf("\nA soma dos valores informados e: %d\n",soma);


    return 0;
}
