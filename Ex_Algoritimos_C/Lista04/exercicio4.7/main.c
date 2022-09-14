#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 7 **********************

/*Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

int main()
{
    int R[10], S[10], X[10];
    int conta=0;

    for (int i=0;i<10;i++){
        printf("Digite valores para adicionar ao indice %d do primeiro vetor\n",i);
        scanf("%d",&R[i]);
    }
    for (int i=0;i<10;i++){
        printf("Digite valores para adicionar ao indice %d do segundo vetor\n",i);
        scanf("%d",&S[i]);
    }

        for (int j=0;j<10;j++){
                X[j]=R[j]+S[j];
        }
    for(int i=0;i<10;i++){
    printf("Vetor X: %d\n",X[i]);
    }

    return 0;
}
