#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariobruto, salarioliquido;
    int horas, horaex;

    printf("Digite o numero de horas trabalhadas\n");
    scanf ("%d",&horas);
    printf ("Digite o numero de horas extras trabalhadas\n");
    scanf ("%d",&horaex);

    horas=horas*10;
    horaex=horaex*15;

    salariobruto=horas+horaex;
    salarioliquido=(salariobruto*-0.1)+salariobruto;


    printf ("O salario bruto e:%.2f, e com impostos descontados: %.2f",salariobruto,salarioliquido);


    return 0;
}
