#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, anos, meses;

    printf("Digite o numero de dias sem acidentes\n");
    scanf ("%d", &dias);

    anos = dias * 0.00273973;
    meses = dias * 0.0328767;

    printf ("O total de anos foi:%d, em meses foram:%d",anos,meses);


    return 0;
}
