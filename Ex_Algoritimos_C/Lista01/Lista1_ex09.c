#include <stdio.h>
#include <stdlib.h>

int main()
{
    int camisap, camisam, camisag;

    printf("Insira o numero de camisetas P\n");
    scanf ("%d", &camisap);
    printf ("Insira o numero de camisetas M\n");
    scanf ("%d", &camisam);
    printf ("Insira o numero de camisetas G\n");
    scanf ("%d", &camisag);

    camisap=10*camisap;
    camisam=12*camisam;
    camisag=15*camisag;

    printf ("O valor arrecadado foi:%d", camisap+camisam+camisag);

    return 0;
}
