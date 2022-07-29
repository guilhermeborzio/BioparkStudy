#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariominimo,salario,montante;

    printf("Digite o valor atual do salario minimo\n");
    scanf ("%f",&salariominimo);
    printf("Digite o salario atual do funcionario\n");
    scanf ("%f",&salario);

    montante=salario/salariominimo;
    printf ("\nAtualmente, voce recebe %.1f salarios minimos",montante);


    return 0;
}
