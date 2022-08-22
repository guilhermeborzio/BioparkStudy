#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 11 **********************

/* Faca um algoritmo que leia 20 numeros e, ao final, escreva quantos estao entre 0 e 100.*/

int main()
{
    int i,num=0,valor=0;
    for(i=0;i<20;i++){
    printf("Digite o %d numero\n",i+1);
    scanf("%d",&num);
    if (num<100&&num>0){valor++;}
    }
    printf("%d valores estao entre 0 e 100",valor);
    return 0;
}
