#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 22 **********************

/* Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
ultrapassar o quilômetro 4000, parando em várias cidades durante o
a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
b. informação da quilometragem percorrida e adicione ao valor da quilometragem total.
c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
d. ultrapassar os 4000 km.*/

int main()
{
    int kms=0,kmrodado=0,paradas=0;

    while (kms<4000)
{
    printf("======== DIARIO DE BORDO ========\n");
    printf("====== KILOMETROS RODADOS: %d ======\n",kms);
    printf("CHEGOU EM UMA PARADA? QUANTOS KMS FORAM RODADOS?");
    scanf("%d",&kmrodado);

    kms+=kmrodado;
    printf("Voce ja percorreu %d kilometros\n",kms);

    paradas++;
    system("pause");
    system("cls");
}

    printf("VOCE CHEGOU AO DESTINO FINAL");
    return 0;
}
