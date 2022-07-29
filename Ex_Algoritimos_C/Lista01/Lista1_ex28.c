#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mp,n1,n2,v1,v2;

    printf("Digite a primeira nota\n");
    scanf ("%f",&n1);
    printf("Digite a segunda nota\n");
    scanf ("%f",&n2);

    printf ("A media final e:%.2f",(n1*2+n2*3)/(2+3));

    return 0;
}
