#include <stdio.h>
#include <stdlib.h>


//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 17 **********************

/*Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente ira pagar [ valor da conta = bebida + (peso * 15) ]. So encerre a
execucao quando o peso do prato digitado for igual a 0 e o valor da bebida for tambem igual
a 0*/

#define preco_kilo 23.59

int main()
{

    float total=0,bebida=0,peso=0;
    do {
    printf("================================\n");
    printf("=== BEM-VINDO AO RESTAURANTE ===\n");
    printf("=== ======================== ===\n");
    printf("======= R$23.59 POR KILO =======\n");
    printf("================================\n");
    printf("==== DIGITE O PESO DO PRATO ====\n");
    printf("=========  EM KILOS  ===========\n");
    printf("================================\n");
    scanf("%f",&peso);
    printf("================================\n");
    printf(" DIGITE O VALOR GASTO EM BEBIDA \n");
    printf("================================\n");
    scanf("%f",&bebida);

    total=bebida+(peso*preco_kilo);

    printf("O TOTAL GASTO FOI R$%.2f\n",total);

    printf("OBRIGADO PELA PREFERENCIA\n");
    system ("pause");
    system("cls");

    }while (bebida!=0&&peso!=0);{
        //printf("O TOTAL GASTO FOI R$%.2f",total);
    };
    return 0;
}
