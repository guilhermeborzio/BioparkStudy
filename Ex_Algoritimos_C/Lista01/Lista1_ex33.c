#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area,basemaior,basemenor,altura;

    printf("Digite a base menor do trapezio em metros\n");
    scanf ("%d",&basemenor);
    printf("Digite a base maior do trapezio em metros\n");
    scanf ("%d",&basemaior);
    printf("Digite a altura do trapezio em metros\n");
    scanf ("%d",&altura);

    area=((basemenor+basemaior)*altura)/2;

    printf ("A area de trapezio e %d em metros",area);

    return 0;
}
