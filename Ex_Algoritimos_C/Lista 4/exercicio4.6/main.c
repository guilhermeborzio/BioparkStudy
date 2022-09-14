#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 6 **********************

/*Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
programa que determine e escreva a menor e a maior idades e suas respectivas posições*/

int main()
{
    int idades[10];
    int menor=0,maior=0,numMaior=0;

    for (int i=0;i<10;i++){
        printf("Digite a idade de 10 pessoas\n");
        scanf("%d",&idades[i]);
    }
    menor=idades[0];
    for (int i=0;i<10;i++){
        if (idades[i]<menor){menor=idades[i];}
    }
    printf("O menor numero e: %d\n",menor);

    maior=idades[0];
    for (int i=0;i<10;i++){
        if (idades[i]>maior){maior=idades[i];}
    }
    printf("O maior numero e: %d\n",maior);


    return 0;
}
