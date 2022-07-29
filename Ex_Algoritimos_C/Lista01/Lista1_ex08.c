#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float media;

    printf("Insira a primeira nota do semestre\n");
    scanf ("%d",&a);
    printf("Insira a segunda nota do semestre\n");
    scanf ("%d",&b);
    printf("Insira a terceira nota do semestre\n");
    scanf ("%d",&c);

    a=a*1;
    b=b*2;
    c=c*3;
    media=(a+b+c)/6;

    printf ("A media final e:%.2f",media);

    return 0;
}
