#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,vendas,comissao;

    printf("Digite o salario fixo\n");
    scanf ("%f",&salario);
    printf("Digite o total vendido no mes\n");
    scanf ("%f",&vendas);

    comissao=vendas*0.04;

    printf ("O total de comissao foi R$%.2f, e o salario final foi de R$%.2f",comissao,(salario+comissao));

    return 0;
}
