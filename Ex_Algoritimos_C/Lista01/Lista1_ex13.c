#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,centena,dezena,unidade;

    printf("Digite um numero\n");
    scanf ("%d",&num);

    centena=num/100;
    dezena=(num-(centena*100))/10;
    unidade=num-((centena*100)+(dezena*10));

    printf ("CENTENA=%d, DEZENA=%d, UNIDADE=%d",centena,dezena,unidade);


    return 0;
}
