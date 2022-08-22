#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 6 **********************

/*Leia a idade de 20 pessoas e exiba a media das idades.*/

int main()
{
    int idade;
    int media=0;
    for(int i=1;i<=20;i++){
    printf("Digite a idade da %d%c pessoa\n",i,167);
    scanf("%d",&idade);
    media=media+idade;
    }
    printf("\nA media das idades informadas e: %d\n",media/20);

    return 0;
}
