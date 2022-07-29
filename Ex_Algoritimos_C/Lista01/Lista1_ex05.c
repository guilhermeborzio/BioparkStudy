#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, preco, litros;

    printf("Digite quantos reais voce quer abastecer\n");
    scanf ("%f", &reais);
    printf ("Qual o preco do litro da gasolina\n");
    scanf ("%f", &preco);

    printf ("Voce abasteceu %f litros\n", reais / preco);


    return 0;
}
