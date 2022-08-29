#include <stdio.h>
#include <stdlib.h>

//************* Exercicío para pratica de organização de vetores com números inteiros
//*********************************** Bubble Sort ***********************************

int main()
{
    int tam=10;
    int vet[tam];
    int i,j,aux;

    for(i=0;i<tam;i++){
    printf("Digite %d numeros para o vetor ordena-lo crescentemente.\n Vetor Indice [%d]: ",tam,i+1);
    scanf("%d",&vet[i]);
    }
    for(i=0;i<tam;i++){
        for (j=i+1;j<tam;j++){
            if (vet[i]>vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    for(i=0;i<tam;i++){
    printf("\nO vetor organizado | Posicao %d: %d",i+1,vet[i]);
    }
    return 0;
}
