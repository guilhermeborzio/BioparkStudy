#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 10 **********************

/*Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de
 ordenação que preferir*/

int main()
{
    int vet[5];
    int aux,menor=0,i,j,tam=5;

    for(int i=0;i<5;i++){
        printf("Digite valores inteiros aleatorios\n");
        scanf("%d",&vet[i]);
    }

    //Encontra o menor

    for(int i=0;i<(tam-1);i++){
            menor=i;
        for(j=(i+1);j<tam;j++){
            if(vet[j]<vet[menor]){
                menor=j;
            }
        }

    //Faz a troca de valores

        if(i!=menor){
            aux=vet[i];
            vet[i]=vet[menor];
            vet[menor]=aux;
        }
    }
    for(int i=0;i<5;i++){
   printf("Vetor %d: [%d] \n",i+1,vet[i]);
    }



    return 0;
}
