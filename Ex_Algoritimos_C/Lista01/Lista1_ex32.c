#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;

    printf("Digite o peso da pessoa em kilos\n");
    scanf ("%f",&peso);

    printf ("===================================\n");

    printf ("O peso da pessoa pesa %.0f quilogramas",peso*1000);

    return 0;
}
