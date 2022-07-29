#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saldo,soma;

    printf("Digite o seu saldo medio\n");
    scanf ("%d", &saldo);

        if(saldo>0&&saldo<200){
            printf("Voce nao possui credito disponivel\n");
        }
        if(saldo>201&&saldo<400){
            soma=saldo*0.2;
                printf("O seu Saldo medio e de:%d e o seu Valor de Credito:%d. Equivalente a 20%%\n",saldo,soma);
        }
        if(saldo>401&&saldo<600){
            soma=saldo*0.3;
            printf("O seu Saldo medio e de:%d e o seu Valor de Credito:%d. Equivalente a 30%%\n",saldo,soma);
        }
        if(saldo>601){
            soma=saldo*0.4;
            printf("O seu Saldo medio e de:%d e o seu Valor de Credito:%d. Equivalente a 40%%\n",saldo,soma);

        }




    return 0;
}
