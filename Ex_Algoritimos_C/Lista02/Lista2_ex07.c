#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura,pesom,pesof;
    char sexo,m,f,M,F;

    printf("Digite a altura em metros\n");
    scanf ("%f",&altura);
    printf ("Digite o sexo M/F\n");
    scanf ("%d",&sexo);


    if (sexo="m"||"M"){
        printf ("O seu peso ideal e:%.2f kilos\n",pesom=(72.2*altura)-58);
    }
    else if (sexo="f"||"F"){
        printf ("O seu peso ideal e:%.2f kilos\n",pesof=(62.1*altura)-44.7);
    }

    return 0;
}
