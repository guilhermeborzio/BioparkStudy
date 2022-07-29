#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float valor,imposto;

    printf("DIGITE O ANO DO SEU VEICULO\n");
    scanf ("%d",&ano);
    printf ("DIGITE O VALOR TABELA FIPE DO SEU VEICULO\n");
    scanf("%f",&valor);

    if (ano>1990){
        imposto=(valor*0.015);
        printf ("O VALOR TOTAL DO IMPOSTO A SE PAGAR E R$%.2f",imposto);
    }
    else if (ano<1990||ano==1990){
        imposto=(valor*0.01);
        printf ("O VALOR TOTAL DO IMPOSTO A SE PAGAR E R$%.2f",imposto);
    }

    return 0;
}
