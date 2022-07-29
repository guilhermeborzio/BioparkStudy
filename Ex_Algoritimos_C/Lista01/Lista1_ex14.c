#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pi,r,a;

    printf("Digite o raio da pizza\n");
    scanf ("%f",&r);
    pi=3.14;

    a=pi*(pow(r,2));

    printf ("A area da pizza e de %.2fcm",a);



    return 0;
}
