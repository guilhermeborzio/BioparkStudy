#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 19 **********************

/*Denvolver um algoritmo que leia a altura de 15 pessoas. Este programa devera calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;*/

int main()
{
    int altura=0,maior=0,menor=0;
    for(int i=1;i<15;i++){
    printf("DIGITE A ALTURA DA %d%c PESSOA EM CMS\n",i,166);
    scanf("%d",&altura);
        if(i==1){
            menor=altura;
            maior=altura;
        }
        if(altura>maior)maior=altura;
        if(altura<menor)menor=altura;

    }

    printf("A MAIOR PESSOA TEM %d CM DE ALTURA\nE A MENOR TEM %d CMS",maior,menor);


    return 0;
}
