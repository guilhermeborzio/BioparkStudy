#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite um numero\n");
    scanf ("%d",&a);
    printf ("Digite outro numero\n");
    scanf ("%d",&b);

    if (a>b){
        printf ("O numero A e maior que B\n");
    }
    else {
        printf ("O numero B e maior que A\n");
    }

    return 0;
}
