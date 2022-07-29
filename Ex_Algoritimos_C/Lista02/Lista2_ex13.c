#include <stdio.h>
#include <stdlib.h>

#define NOTA100 100
#define NOTA50 50
#define NOTA10 10
#define NOTA5 5
#define NOTA1 1

int main()
{
    float valor=0;
    int qtd100=0, qtd50=0, qtd10=0, qtd5=0, qtd1=0;

    printf("DIGITE UM VALOR EM REAIS\n");
    scanf ("%f",&valor);

    if (valor>=NOTA100){
        qtd100=valor/NOTA100;
        valor-=qtd100*NOTA100;
    }
    if (valor>=NOTA50){
        qtd50=valor/NOTA50;
        valor-=qtd50*NOTA50;
    }
    if (valor>=NOTA10){
        qtd10=valor/NOTA10;
        valor-=qtd10*NOTA10;
    }
    if (valor>=NOTA5){
        qtd5=valor/NOTA5;
        valor-=qtd5*NOTA5;
    }
    if (valor>=NOTA1){
        qtd1=valor/NOTA1;
        valor-=qtd1*NOTA1;

        printf ("\n O VALOR DE R$%.2f PODE SER COMPOSTO POR: ", valor);
        printf("\n%d NOTAS DE R$100",qtd100);
        printf("\n%d NOTAS DE R$50",qtd50);
        printf("\n%d NOTAS DE R$10",qtd10);
        printf("\n%d NOTAS DE R$5",qtd5);
        printf("\n%d NOTAS DE R$1",qtd1);
    }




    return 0;
}
