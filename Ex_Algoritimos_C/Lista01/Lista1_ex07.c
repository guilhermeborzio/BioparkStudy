#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, dia, dias;

    printf("Digite o mes atual\n");
    scanf ("%d",&mes);
    printf ("Digite o dia do mes\n");
    scanf ("%d", &dia);

    mes=(mes*30)-30;
    dias=dia+mes;

    printf ("Se passaram %d dias", dias);


    return 0;
}
