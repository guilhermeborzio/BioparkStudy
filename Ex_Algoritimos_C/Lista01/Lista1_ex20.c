#include <stdio.h>
#include <stdlib.h>

#define laporsu 68

int main()
{
    int sueteres = 0;
    printf("DIGITE A QUANTIDADE DE SUETERES QUE DESEJA PRODUZIR: ");
    scanf("%d", &sueteres);

    int latotal = sueteres * laporsu;
    printf("\nPARA PRODUZIR %d SUETERES, SERA NECESSARIO %d NOVELOS DE LA\n", sueteres, latotal);

    return 0;
}
