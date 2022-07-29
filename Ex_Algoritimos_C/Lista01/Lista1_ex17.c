#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, f;

    printf ("Digite a temperatura em Celsius\n");
    scanf ("%d",&c);

    f=(c*1.8)+32;

    printf ("A temperatura em Fahrenheit e:%d\n",f);


    return 0;
}
