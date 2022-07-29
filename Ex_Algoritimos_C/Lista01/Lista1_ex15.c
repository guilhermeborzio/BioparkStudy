#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta,felipe;
    int semtroco;

    printf("Digite o valor da conta\n");
    scanf ("%f", &conta);

    semtroco = conta / 3;
    felipe = conta - (semtroco*2);


    printf("Carlos pagara %d, Andre pagara %d e Felipe pagara %.2f",semtroco,semtroco,felipe);



    return 0;
}
