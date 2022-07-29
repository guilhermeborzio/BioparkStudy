#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel,qtdaula;
    float salario;

    printf("Digite seu nivel como professor. 1, 2 ou 3\n");
    scanf ("%d",&nivel);
    printf("Digite a quantidade de aulas que voce deu neste mes.\n");
    scanf ("%d",&qtdaula);

    if (nivel == 1){
        salario=(12*qtdaula)*4.5;
        printf ("Seu salario foi de R$%.2f",salario);
    }
    else if (nivel == 2){
        salario=(17*qtdaula)*4.5;
        printf("Seu salario foi de R$%.2f",salario);
    }
    else if (nivel == 3){
        salario=(25*qtdaula)*4.5;
        printf("Seu salario foi de R$%.2f",salario);
    }



    return 0;
}
