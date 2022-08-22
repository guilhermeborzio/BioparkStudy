#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 9 **********************

/* Escreva um algoritmo que leia 20 números informados pelo usuario e exiba quantos números são
maiores do que 8*/

int recebeValores();
void verificaMaiores();
int num,total=0;

int main()
{
    recebeValores();
    printf("O total de numeros maiores que 8 e:%d \n",total);

    return 0;
}
int recebeValores()
{
    for(int n=0; n<5; n++)
    {
        printf("Digite o %d numeros\n",n+1);
        scanf("%d",&num);
        verificaMaiores(num,total);
    }
    return total;
}
void verificaMaiores()
{
    if(num>8)
    {
        total++;
    }
    else {};
}


