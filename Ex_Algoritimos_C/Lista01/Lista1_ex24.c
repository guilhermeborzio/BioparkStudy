#include <stdio.h>
#include <stdlib.h>

int main()
{
    int agua, suco, refresco;

    printf("Digite o numero de litros de refresco desejados\n");
    scanf ("%d",&refresco);

    agua=(refresco*0.8);
    suco=(refresco*0.2);

    printf ("Sao necessarios %d litros de agua e %d litros de suco para se fazer %d litros de refresco",agua,suco, refresco);

    return 0;
}
