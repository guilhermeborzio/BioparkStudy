#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("===================================\n");
    printf("====== BEM VINDO A LANCHONETE =====\n");
    printf("===================================\n");
    printf("===========FACA SEU PEDIDO=========\n");
    printf("===================================\n");
    printf("=COD=====PRODUTO=============PRECO=\n");
    printf("====== = = = = = = = = = = = = ====\n");
    printf("= 1 - CACHORRO QUENTE ---- R$11.00=\n");
    printf("= 2 - BAURU - --- --- ---- R$8.50==\n");
    printf("= 3 - MISTO QUENTE --- ---- R$8.00=\n");
    printf("= 4 - HAMBURGUER --- - ---- R$9.00=\n");
    printf("= 5 - CHEESEBURGUER - ---- R$10.00=\n");
    printf("= 6 - REFRIGERANTE --- ---- R$4.50=\n");
    printf("= 7 -  ---  ---- ==========\n");
    printf("====================================\n");

    int pedido,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0;
    float vtotal;
    char refri[20];

    do{
        printf("Escolha um item:");
        scanf("%d",&pedido);
        switch (pedido){
        case 1:
            printf ("Quantidade:");
            scanf("%d",&num1);
            vtotal+=num1*11;
        break;
        case 2:
            printf("Quantidade:");
            scanf("%d",&num2);
            vtotal+=num2*8.5;
            break;
        case 3:
            printf("Quantidade:");
            scanf("%d",&num3);
            vtotal+=num3*8.0;
            break;
        case 4:
            printf("Quantidade:");
            scanf("%d",&num4);
            vtotal+=num4*9;
            break;
        case 5:
            printf("Quantidade:");
            scanf("%d",&num5);
            vtotal+=num5*10;

        case 6:
            printf("Quantidade:");
            scanf("%d",&num6);
            printf("Selecione o refrigerante\n1 - COCA-COLA\n2 - GUARANA\n3 - FANTA\n");
            scanf("%s",refri);
            vtotal+=num6*4.5;
            break;
        case 7:
            printf("\nPedido finalizado\n");
            printf("%d cachorro quente\n",num1);
            printf("%d Bauru\n",num2);
            printf("%d Misto Quente\n",num3);
            printf("%d Hamburguer\n",num4);
            printf("%d Cheeseburguer\n",num5);
            printf("%d Refrigerante %s\n",num6,refri);
            printf("Valor total da compra R$%.2f",vtotal);
            break;
        default :
            printf("Numero incorreto, tente novamente\n");
        }

            }while (pedido!=7);

    return 0;
}
