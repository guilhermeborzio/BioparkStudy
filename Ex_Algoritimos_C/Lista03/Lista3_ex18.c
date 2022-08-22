#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 18 **********************

/* Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
aluno esta aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
ou igual a 6.*/

int main()
{
    int alunos=1,notas=1,escolha=0;
    do{
    printf("DIGITE %d%c NOTA DO %d%c ALUNO: \n",notas,166,alunos,167);
    float nota1=0;
    scanf("%f",&nota1);

    notas++;

    printf("DIGITE %d%c NOTA DO %d%c ALUNO: ",notas,166,alunos,167);
    float nota2=0;
    scanf("%f",&nota2);

    float media=(nota1+nota2)/2;

    printf(media>=60?"\nO ALUNO %d ESTA APROVADO!" : "\nO ALUNO %d ESTA REPROVADO!",alunos);

    alunos++;
    notas=1;

    printf("\n DESEJA VERIFICAR MAIS ALGUM ALUNO?\n");
    printf("DIGITE 1 PARA SIM\n");
    printf("DIGITE 2 PARA NAO\n");
    scanf("%d",&escolha);

    system("cls");

    }while (escolha==1);
    return 0;
}
