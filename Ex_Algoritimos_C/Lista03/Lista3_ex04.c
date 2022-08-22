#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 4 **********************

/*Leia o nome de um usuario e um número N e escreva o nome dele na tela N vezes.*/

int main()
{
    int n=0;
    char name[50];
    printf("Escreva seu nome\n");
    gets(name);
    printf("Digite um numero\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%s\n",name);
    }
    return 0;
}
