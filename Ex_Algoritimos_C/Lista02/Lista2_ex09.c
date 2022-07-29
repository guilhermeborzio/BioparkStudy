#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra;
    float nota1,nota2,nota3,media;

    printf("Digite o RA do aluno\n");
    scanf ("%d",&ra);

    printf("Digite a primeira nota\n");
    scanf ("%f",&nota1);
    printf("Digite a segunda nota\n");
    scanf ("%f",&nota2);
    printf("Digite a terceira nota\n");
    scanf ("%f",&nota3);

    media=(nota1+nota2+nota3)/3;

    if (media>7){
        printf ("O aluno RA:%d foi aprovado direto\n",ra);
    }
    else if (media>5&&media<7){
        printf("O aluno RA:%d ficou de recuperacao\n",ra);
    }
    else if (media<5){
        printf("O aluno RA:%d foi reprovado\n",ra);
    }
    return 0;
}
