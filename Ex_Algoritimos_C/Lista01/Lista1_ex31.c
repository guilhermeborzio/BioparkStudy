#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso,eng,ema;

    printf("Digite o peso da pessoa\n");
    scanf ("%d",&peso);

    eng=peso+(peso*0.15);
    ema=peso-(peso*0.2);

    printf ("O peso da pessoa sera %d se engordar quinze por cento.\n E sera %d se emagrecer vinte por cento\n",eng,ema);
    printf ("==============================================================\n");

    return 0;
}
