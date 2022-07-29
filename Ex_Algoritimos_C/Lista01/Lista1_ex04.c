#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos, dias;

    printf("Digite quantos anos voce tem\n");
    scanf ("%d", &anos);

    dias = anos * 365;

    printf ("Voce tem %d dias de vida", dias);

    return 0;
}
