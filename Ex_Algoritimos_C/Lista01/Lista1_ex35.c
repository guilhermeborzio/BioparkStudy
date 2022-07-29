#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area, diagonalmaior, diagonalmenor;

    printf("Digite a diagonal maior do losangulo\n");
    scanf ("%d",&diagonalmaior);
    printf ("Digite a diagonal menor do losangulo\n");
    scanf ("%d",&diagonalmenor);

    area=((diagonalmaior*diagonalmenor)/2);

    printf ("A area do losangulo total e %d",area);

    return 0;
}
