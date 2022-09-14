#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 9 **********************

/*Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos*/

int main()
{
    int D[10];

    for(int i=0; i<10; i++)
    {
        printf("Digite o indice %d para o vetor D\n",i);
        scanf("%d",&D[i]);
        if (D[i]<0 || D[i]==NULL)
        {
            D[i]=0;
        }

    }
    for(int i=0;i<10;i++){
    printf("O valor final do vetor: %d\n",D[i]);
    }
    return 0;
}
