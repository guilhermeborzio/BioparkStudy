#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,total;

    printf("Digite o numero A\n");
    scanf ("%d",&a);
    printf ("Digite o numero B\n");
    scanf ("%d",&b);

    if (a==b){
        total=a+b;
    }
    else if (a!=b){
        total=a*b;
    }
    printf ("O total e %d",total);


    return 0;
}
