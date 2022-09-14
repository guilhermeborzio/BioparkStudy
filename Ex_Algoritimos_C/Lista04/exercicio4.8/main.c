#include <stdio.h>
#include <stdlib.h>

//************** LISTA 4 ************************
//************ EXERCICIO 8 **********************

/*Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos
contendo uma aposta. A seguir imprima quantos pontos fez o apostador.*/

int main()
{
    int R[5],A[10];
    int i,j,acerto=0;

    for(i=0; i<5; i++)
    {
        printf("Digite os numeros da LOTO\n");
        scanf("%d",&R[i]);
    }
    system("cls");
    for(j=0; j<10; j++)
    {
        printf("Digite agora a sua aposta! 10 numeros permitidos ");
        scanf("%d",&A[j]);
    }
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<10; j++)
        {
            if (R[i]==A[j])
            {
                acerto++;

            }
        }
    }
    printf("\nPARABENS! VOCE ACERTOU %d NUMEROS",acerto);
    return 0;
}
