#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 3 **********************

/* Leia o nome do usuario e escreva o nome dele na tela 10 vezes.*/

int main()
{
    char nome[20];
    printf("Digite o seu nome\n");
    scanf ("%s",nome);
    for (int i=1;i<=10;i++){
        printf("%s\n",nome);
    }
    return 0;
}
