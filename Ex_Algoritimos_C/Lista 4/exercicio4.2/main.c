#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 2 **********************

/*Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7 */

int main()
{
    int vet[20],pares=0,impar=0,maioresq50=0,menorq7=0;
    for (int i=0;i<20;i++){
    printf("Digite o %d valor para os indices\n",i);
    scanf("%d",&vet[i]);
        if (vet[i]%2==0){pares++;}
            if(vet[i]%2!=0){impar++;}
                if(vet[i]>50){maioresq50++;}
                    if(vet[i]<7){menorq7++;}
    }
    printf("\nExistem %d numeros pares",pares);
    printf("\nExistem %d numeros impares",impar);
    printf("\nExistem %d numeros maiores que 50",maioresq50);
    printf("\nExistem %d numeros menores que 7",menorq7);

    return 0;
}
