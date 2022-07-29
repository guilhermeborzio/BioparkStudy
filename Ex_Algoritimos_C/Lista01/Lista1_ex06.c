#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Digite o peso do prato\n");
    scanf ("%f", &peso);

    peso=peso*12.0;

    printf ("O valor total foi R$%.2f", peso);

    return 0;
}
