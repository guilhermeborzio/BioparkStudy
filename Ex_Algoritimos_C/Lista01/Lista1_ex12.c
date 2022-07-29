#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salarioaum, salariodesc;

    printf("Digite o seu salario\n");
    scanf ("%f",&salario);

    salarioaum = salario * 115/100;
    printf ("R$%.2f, este e o salario com aumento\n", salarioaum);

    salariodesc = salarioaum - (salarioaum*8/100);
    printf ("R$%.2f, este e o salario com aumento\n", salariodesc);


    printf ("Seu salario e:R$%.2f, com o aumento:R$%.2f, e com os impostos:R$%.2f",salario,salarioaum,salariodesc);




    return 0;
}
