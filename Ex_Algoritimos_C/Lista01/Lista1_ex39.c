#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c1,c2,salario,sobra;

    printf ("Joao possui um salario de R$1200 e tem duas contas para pagar\n nos valores de R$200 e R$120 acrecidos de 2 por cento de multa de atraso\n");
    printf ("=========================================================================\n");
    c1=200+0.02;
    c2=120+0.02;
    salario=1200;
    sobra=salario-c1-c2;

    printf("Apos pagar as contas, restarao R$%.2f do salario de Joao\n",sobra);
    return 0;
}
