#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 1 **********************

/*Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante*/

int main()
{
    int v1[10],v2[10],total[10];

    for(int i=1;i<=10;i++){
    printf("Digite um numero para adiciona-lo ao vetor %d\n",i);
    scanf("%d",&v1[i-1]);
    }
    for(int j=1;j<=10;j++){
    printf("Digite um numero para adiciona-lo ao vetor %d\n",j);
    scanf("%d",&v2[j-1]);
    }

    for(int x=0;x<10;x++){
            total[x]=v1[x]+v2[x];
    }
    printf("\nVetor 1: ");
    for(int i=0;i<10;i++){
        printf("%3d",v1[i]);
    }
    printf("\nVetor 2: ");
    for(int i=0;i<10;i++){
        printf("%3d",v2[i]);
    }
    printf("\nVetor 3: ");
    for (int i=0;i<10;i++){
    printf("%3d",total[i]);

    }
    return 0;
}
