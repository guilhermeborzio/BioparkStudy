#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, area;

    printf ("Digite o lado do retangulo \n");
    scanf ("%d",&a);
    printf ("Digite a altura do retangulo \n");
    scanf ("%d",&b);

    area = a * b;

    printf ("a area tem:%d metros quadrados, com %d metros de largura e %d metros de altura", area, a, b);



    return 0;
}
