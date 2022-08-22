#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 16 **********************

/* Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
seu algoritmo deve receber do a informacao de quantos produtos o cliente comprou e, para
cada produto, deverá ler o seu preco. Ao final, deverá informar quanto o cliente deve pagar
pelas compras.*/

int main()
{
    int qnt=0,total=0,escolha=0;

    do{
    printf("===============================\n");
    printf("===  ESCOLHA SEUS PRODUTOS  ===\n");
    printf("===============================\n");
    printf("= 1 - SHAMPOO   R$15.00  |=====\n");
    printf("= 2 - LEGUMES   R$7.00   |=====\n");
    printf("= 3 - SUCO      R$10.00  |=====\n");
    printf("= 4 - PAO       R$5.00   |=====\n");
    printf("= 5 - QUEIJO    R$8.00   |=====\n");
    printf("= 0 - PARA SAIR ===============\n");
    printf("===============================\n");
    scanf("%d",&escolha);

    switch (escolha){
    case 1:
        printf("Digite a quantidade\n");
        scanf("%d",&qnt);
        total+=(15*qnt);
        break;
    case 2:
        printf("Digite a quantidade\n");
        scanf("%d",&qnt);
        total+=(7*qnt);
        break;
    case 3:
        printf("Digite a quantidade\n");
        scanf("%d",&qnt);
        total+=(10*qnt);
        break;
    case 4:
        printf("Digite a quantidade\n");
        scanf("%d",&qnt);
        total+=(5*qnt);
        break;
    case 5:
        printf("Digite a quantidade\n");
        scanf("%d",&qnt);
        total=total+(8*qnt);
        break;
        }

    system("cls");
    }while(escolha!=0);

    printf("O TOTAL DE SUAS COMPRAS FOI R$%d",total);


    return 0;
}
