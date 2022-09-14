#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 4 **********************

/* Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i]. */

int main()
{

    float a[10]={23,12,42,6,25,98,0.7,67,4.5,10},
    b[10]={41,5.5,23,41,12,24,77,1.2,33,45},
    c[10];
    for(int i=0;i<10;i++){
        c[i]=a[i]+b[i];
    printf("Os indices do vetor C sao: %.2f\n",c[i]);

    }


    return 0;
}
