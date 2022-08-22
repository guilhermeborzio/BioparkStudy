#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 7 **********************

/* Leia a idade de 20 pessoas e exiba quantas pessoas sao maiores de idade. */

int main()
{
    int age=0,older=0;

    for (int i=1;i<=20;i++){
        printf("Digite a idade da %d pessoa\n",i);
        scanf("%d",&age);
        if (age>=18){
            older++;
        }
    }
    printf("Existem %d pessoas maiores de idade\n",older);

    return 0;
}
