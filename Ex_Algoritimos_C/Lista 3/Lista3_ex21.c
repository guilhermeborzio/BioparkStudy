#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 21 **********************

/* O restaurante da questao 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
area de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada area. Construa um algoritmo que realize a reserva das mesas e encerre a execucao
quando nao houver mais mesas disponiveis (nem na área de fumantes, nem na área de não
fumantes).*/

int main()
{
    int escolha,mesafum=0,mesa=0,totalmesasfum=25,totalmesas=25;

    for(int i=0; (totalmesasfum>0||totalmesas>0); i++)
    {
        printf("======= BEM VINDO AO RESTAURANTE =======\n");
        printf("=========== FACA UMA RESERVA ===========\n");
        printf("====== TEMOS %d MESAS DISPONIVEIS ======\n",totalmesas+totalmesasfum);
        printf(" %d PARA FUMANTES == %d PARA NAO FUMANTES\n",totalmesasfum,totalmesas);
        printf("========== MESA PARA FUMANTE? S/N ======\n");
        printf("============= 1 - PARA SIM =============\n");
        printf("============= 2 - PARA NAO =============\n");
        scanf("%d",&escolha);

        if  (escolha==1){
                if (totalmesasfum>0){
            totalmesasfum-=1;
        }
            printf("A sua mesa e a numero: %d",totalmesasfum+25);
        }


        else if(escolha==2)
        {   if(totalmesas>0){
            totalmesas-=1;}
            printf("A sua mesa e a numero: %d\n",totalmesas);
        }
        if (totalmesas==0 && totalmesasfum==0){
            break;
        }

        system("cls");
    }
    printf("ACABARAM AS MESAS DISPONIVEIS\n");

    return 0;

}
