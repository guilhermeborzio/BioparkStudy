#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 5 **********************

/*Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15.*/

int main()
{
    int vet1[10];
    int somaMenores=0, iguaisa15=0, maioresq15=0;
    float somaMaiores=0;

    for (int i=0;i<10;i++){
    printf("DIGITE UM NUMERO PARA ARMAZENA-LO AO INDICE\n");
    scanf("%d", &vet1[i]);
        if (vet1[i]<15){somaMenores+=vet1[i];}

        if (vet1[i]==15){iguaisa15++;}

        if (vet1[i]>15){maioresq15++; somaMaiores+=vet1[i];}
    }
    printf("A soma dos numeros menores que 15 sao: %d\n",somaMenores);
    printf("Os numeros iguais a 15 sao: %d\n",iguaisa15);
    printf("A media dos numeros maiores que 15 e: %.2f\n",somaMaiores/maioresq15);

    return 0;
}
