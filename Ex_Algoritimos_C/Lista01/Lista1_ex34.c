#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area, lado;

    printf("Digite quantos centimetros tem o lado do quadrado\n");
    scanf ("%d",&lado);

    area=lado*lado;

    printf ("A area do quadrado e igual a %d centimetros\n",area);
    printf ("=============================================\n");

    return 0;
}
