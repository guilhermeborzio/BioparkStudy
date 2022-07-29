#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int catetoO,catetoA,hipo;

    printf("Digite o cateto oposto\n");
    scanf ("%d",&catetoO);
    printf ("Digite o cateto adjacente\n");
    scanf ("%d",&catetoA);

    hipo= sqrt (pow(catetoO,2)+ pow(catetoA,2));

    printf ("Cateto oposto:%d \nCateto adjacente:%d \nHipotenusa:%d",catetoO,catetoA,hipo);

    return 0;
}
