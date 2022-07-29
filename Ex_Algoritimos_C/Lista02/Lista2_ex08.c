#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, valorfinal;
    int escolha;

    printf("DIGITE O VALOR DO PRODUTO: ");
    scanf ("%f",&valor);
    printf("1 - A vista em dinheiro ou cheque, recebe 10%% de desconto\n2 - A vista no cartao de credito, recebe 15%% de desconto\n3 - Em duas vezes, preco normal de etiqueta sem juros\n4 - Em duas vezes, preco normal de etiqueta mais juros de 10%%\n");
    printf("Escolha a forma de pagamento: ");
    scanf ("%d",&escolha);
    switch(escolha){
        case 1:
            valorfinal=valor-valor*0.1;
            printf("O valor final da sua compra corresponde a R$%.2f", valorfinal);
            break;
        case 2:
            valorfinal=valor-valor*0.15;
            printf("O valor da sua compra final e:R$%.2f",valorfinal);
            break;
        case 3:
            valorfinal=valor/2;
            printf ("O valor da sua compra fica 2x de R$%.2f",valorfinal);
            break;
        case 4:
            valorfinal=(valor*1)/2;
            printf ("O valor da sua compra fica 2x de R$%.2f",valorfinal);
            break;
        default:
            printf("Numero invalido");

        return 0;
    }
}
