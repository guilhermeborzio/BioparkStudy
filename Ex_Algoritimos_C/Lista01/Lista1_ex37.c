#include <stdio.h>
#include <stdlib.h>

int main()
{
        int number = 0;
    printf("Digite um numero de 1 a 9 para verificar a sua tabuada ");
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++){
        int value = number * i;
        printf("%d x %d = %d\n", number, i, value);
    }


    return 0;
}
