#include <stdio.h>
#include <stdlib.h>

int main()
{
    float queijo, presunto, carne, sanduiches;



    printf("Insira a quantidade de sanduiches a fazer\n");
    scanf ("%f",&sanduiches);

    queijo=sanduiches*50;
    presunto=sanduiches*50;
    carne=sanduiches*100;

    printf ("Voce precisa comprar %.2f kilos de queijo, %.2f kilos de presunto, e %.2f kilos de carne.\n",2*queijo/1000,presunto/1000,carne/1000);


    return 0;
}
