#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 12 **********************

/*Faca um algoritmo que leia 20 numeros e, ao final, escreva quantos estao entre 0 e
a. 100, quantos estao entre 101 e 200 e quantos sao maiores de 200.*/

int main()
{
    int i,num=0,ate100=0,ate200=0,acima200=0;
   for (i=0;i<=20;i++){
    printf("Digite o %d numero\n",i+1);
    scanf("%d",&num);
        if (num>0&&num<100){ate100+=1;}
        if (num>101&&num<200){ate200+=1;}
        if (num>200){acima200+=1;}
   }

    printf("OS NUMEROS ATE 100 FORAM: %d\nATE 200:%d\nACIMA DE 200:%d",ate100,ate200,acima200);
    return 0;
}
