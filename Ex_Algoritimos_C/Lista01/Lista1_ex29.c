#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,pd;

    printf("Digite o valor do produto\n");
    scanf ("%f",&p);

    pd=(p*-0.1)+p;

    printf ("O produto com desconto fica R$%.2f",pd);

    return 0;
}
