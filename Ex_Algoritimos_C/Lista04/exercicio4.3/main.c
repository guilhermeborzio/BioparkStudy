#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 3 **********************

/*vetor B de mesmo tipo e tamanho e com os elementos do vetor A multip*/

int main()
{
    int i=0,vet1[8],vet2[8];

    for(i=1;i<=8;i++){
    printf("\nDigite 8 numeros para o vetor 1. Vetor: %d\n",i);
    scanf("%d",&vet1[i]);
    vet2[i]=vet1[i]*2;
    printf("\nO vetor %d e: %d\n",i,vet2[i]);
    }

    return 0;
}
