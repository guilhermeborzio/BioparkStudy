#include <stdio.h>
#include <stdlib.h>

int main()
{
    int galinhas;
    float anelid, anelfood;

    printf("Digite o numero de galinhas na granja\n");
    scanf ("%d",&galinhas);

    anelfood=galinhas*3.50;
    anelid=galinhas*4.0;

    printf ("O valor gasto com aneis identificadores e:R$%.2f e com aneis de alimentacao: R$%.2f",anelid,anelfood);



    return 0;
}
