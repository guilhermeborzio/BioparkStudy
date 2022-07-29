#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf ("Digite o numero de paes vendidos\n");
    scanf ("%d", &a);
    printf ("Digite o numero de broas vendidas\n");
    scanf ("%d", &b);

    a = a * 0.12;
    b = b * 1.50;

    printf ("Total acumulado = %d \n", a+b);

    c = (a+b)*0.1;

    printf ("O total do dinheiro alocado para a poupanca %d", c);


    return 0;
}
