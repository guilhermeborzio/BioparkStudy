#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 8 **********************

/*Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova*/


int main()
{
    char nome[60],name[60];
    int idade[20];
    int menor=0;

    for(int i=0;i<10;i++){
    printf("Digite o nome da %d pessoa\n",i+1);
    scanf("%s",nome);

    printf("Digite a idade da %d%c pessoa %s\n",i+1,167,nome);
    scanf("%d",&idade[i]);

        if (i==0){
                menor=idade[0];
                strcpy(name,nome);
        }
            else if (idade[i]<menor){
                strcpy(name,nome);
                menor=idade[i];
            }
            }

    printf ("\n%s E A PESSOA MAIS NOVA COM A IDADE DE %d\n",name,menor);
    return 0;
}
