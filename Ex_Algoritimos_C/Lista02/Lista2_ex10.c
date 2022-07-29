#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("DIGITE UM NUMERO INTEIRO\n");
    scanf ("%d",&num1);
    printf("DIGITE OUTRO NUMERO INTEIRO\n");
    scanf ("%d",&num2);

    if (num1>num2){
        printf ("O PRIMEIRO NUMERO E MAIOR\n");
    }
    else if (num2>num1){
        printf ("O SEGUNDO NUMERO E MAIOR\n");
    }
    return 0;
}
