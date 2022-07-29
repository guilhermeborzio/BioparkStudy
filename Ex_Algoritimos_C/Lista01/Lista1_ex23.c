#include <stdio.h>
#include <stdlib.h>

#define conversao_altura 100

int main()
{
    int alturapessoa = 0;
    printf("DIGITE SUA ALTURA [CM]: ");
    scanf("%d", &alturapessoa);

    int sombrapredio = 0;
    printf("DIGITE O COMPRIMENTO DA SOMBRA DO PREDIO [CM]: ");
    scanf("%d", &sombrapredio);

    int sombrapessoa = 0;
    printf("DIGITE O COMPRIMENTO DA SUA SOMBRA [CM]: ");
    scanf("%d", &sombrapessoa);

    float altura = alturapessoa / sombrapessoa;
    float alturapredio = (altura * sombrapredio) / conversao_altura;

    printf("\nO PREDIO POSSUI %.2f METROS DE ALTURA\n", alturapredio);

    return 0;
}
