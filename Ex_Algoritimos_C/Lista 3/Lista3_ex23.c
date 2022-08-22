#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 23 **********************

/*Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
h. respectiva porcentagem de audiência*/

    int casas=0,qtdcasas=0,canal=0,qtdpessoas=0;
    int canal3=0,canal5=0,canal8=0,canal11=0,canal13=0;
    float totalpessoas=0.000000001;

void printarMenu();

int main()
{

    printf("\n");
    printf("||Quantas casas foram inclusas na pesquisa?||\n\n");
    scanf("%d",&qtdcasas);

    for (int i=0;i<qtdcasas;i++){
    printarMenu();
    printf("|===Qual canal esta sendo assistido===|\n");
    scanf("%d",&canal);
    printf("|===Quantas pessoas estao assistindo?===|\n");
    scanf("%d",&qtdpessoas);

        switch (canal){

        case 3:
            canal3+=qtdpessoas;
            totalpessoas+=qtdpessoas;
            break;

        case 5:
            canal5+=qtdpessoas;
            totalpessoas+=qtdpessoas;
            break;

        case 8:
            canal8+=qtdpessoas;
            totalpessoas+=qtdpessoas;
            break;
        case 11:
            canal11+=qtdpessoas;
            totalpessoas+=qtdpessoas;
            break;
        case 13 :
            canal13+=qtdpessoas;
            totalpessoas+=qtdpessoas;
            break;
        }





    system("cls");

    }
        printarMenu();
        printf("\n\n\n|=== O TOTAL DE CASAS AVALIADAS FORAM: %d\nE UM TOTAL DE %.0f PESSOAS\n",qtdcasas,totalpessoas);


    return 0;
}
void printarMenu(){
    printf("|=========================================|\n");
    printf("|======= PREFEITURA DE JOAO CAMARA =======|\n");
    printf("|=========================================|\n");
    printf("|====== PESQUISA DE EMISSORAS DE TV ======|\n");
    printf("|=========================================|\n");
    printf("|=======| CANAL  |    NUMERO   | |TOTAL|==|\n");
    printf("|=======|  ===   |    ======   | |        |\n");
    printf("|=======| GLOBO  |       3     | | %.2f  |\n",canal3/totalpessoas*100);
    printf("|=======| SBT    |       5     | | %.2f  |\n",canal5/totalpessoas*100);
    printf("|=======| REDETV |       8     | | %.2f  |\n",canal8/totalpessoas*100);
    printf("|=======| HBO    |      11     | | %.2f  |\n",canal11/totalpessoas*100);
    printf("|=======| SPORTV |      13     | | %.2f  |\n",canal13/totalpessoas*100);
    printf("|=========================================|\n");
}
