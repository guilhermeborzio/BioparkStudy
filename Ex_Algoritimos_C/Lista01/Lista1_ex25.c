#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura,volume;

    printf("Digite a base da caixa em metros\n");
    scanf ("%f",&base);
    printf ("Digite a altura da caixa em metros\n");
    scanf ("%f", &altura);

    volume=base*altura;

    printf ("O volume total em centimetros cubicos da caixa da agua e:%.2f litros",volume*1000);

    return 0;
}
