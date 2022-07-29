#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros;
    int lata, garrafa, garrafao;

    printf("Digite o numero de latas compradas\n");
    scanf ("%d",&lata);
    printf("Digite o numero de garrafas 600ml compradas\n");
    scanf ("%d",&garrafa);
    printf("Digite o numero de garrafas 2l compradas\n");
    scanf ("%d",&garrafao);

    lata=lata*350;
    garrafa=garrafa*600;
    garrafao=garrafao*2000;

    litros=lata+garrafa+garrafao;

    printf ("O total de litros comprados foi %.2f",litros/1000);

    return 0;
}
