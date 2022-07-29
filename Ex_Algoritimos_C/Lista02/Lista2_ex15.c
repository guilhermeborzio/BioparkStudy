#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario,salarionovo,aumento;
    int cargo;
    printf ("DIGITE O CODIGO DO SEU CARGO\n101 - Gerente\n102 - Engenheiro\n103 - Tecnico\n");
    scanf ("%d", &cargo);
    printf ("DIGITE O SEU SALARIO TOTAL\n");
    scanf ("%f", &salario);

        if (cargo==101)
        {
            aumento=(salarionovo-salario);
            salarionovo=(salario+salario*0.1);
            printf("Seu salario antigo e R$%.2f\nSeu salario com aumento e R$%.2f\nO aumento foi de R$%.2f",salario,salarionovo,aumento);

        }
        else if (cargo==102){
            aumento=(salarionovo-salario);
            salarionovo=(salario+salario*0.02);
            printf("Seu salario antigo e R$%.2f\nSeu salario com aumento e R$%.2f\nO aumento foi de R$%.2f",salario,salarionovo,aumento);
}

        else if (cargo==103){
            aumento=(salarionovo-salario);
            salarionovo=(salario+salario*0.03);
            printf("Seu salario antigo e R$%.2f\nSeu salario com aumento e R$%.2f\nO aumento foi de R$%.2f",salario,salarionovo,aumento);

}
        else
            printf("Seu salario antigo e R$%.2f\nSeu salario com aumento e R$%.2f\nO aumento foi de R$%.2f",salario,salarionovo,aumento);



    return 0;
}
