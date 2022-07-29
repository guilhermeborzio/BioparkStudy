#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,resultado;

    printf("Digite um numero\n");
    scanf ("%d",&num);

    if (num>0){
        resultado=num*2;
    }
    else if (num<0){
        resultado=num*3;
    }
    printf ("O resultado e:%d",resultado);

    return 0;
}
