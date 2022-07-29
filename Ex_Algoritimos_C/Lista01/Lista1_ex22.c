#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c1,c5,c10,c25,c50,r1,total;

    printf("Digite a quantidade de moedas de 1 centavo\n");
    scanf ("%f",&c1);

    printf("Digite a quantidade de moedas de 5 centavos\n");
    scanf ("%f",&c5);

    printf("Digite a quantidade de moedas de 10 centavos\n");
    scanf ("%f",&c10);

    printf("Digite a quantidade de moedas de 25 centavos\n");
    scanf ("%f",&c25);

    printf("Digite a quantidade de moedas de 50 centavos\n");
    scanf ("%f",&c50);

    printf("Digite a quantidade de moedas de 1 real\n");
    scanf ("%f",&r1);

    c1=c1*0.01;
    c5=c5*0.05;
    c10=c10*0.1;
    c25=c25*0.25;
    c50=c50*0.5;
    r1=r1*1;

    total=c1+c5+c10+c25+c50+r1;

    printf ("O valor total em reais e:%.2f",total);

    return 0;
}
