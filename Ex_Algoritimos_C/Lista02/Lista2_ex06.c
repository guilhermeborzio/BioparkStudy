#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Digite tres numeros inteiros\n");
    scanf ("%d%d%d",&a,&b,&c);

    if (a>b&&a>c){
        printf ("O primeiro numero e o maior\n");
    }
    if (b>a&&b>c){
        printf ("O segundo numero e o maior\n");
    }
    if (c>a&&c>b){
        printf ("O primeiro numero e o maior\n");
    }
    return 0;
}
