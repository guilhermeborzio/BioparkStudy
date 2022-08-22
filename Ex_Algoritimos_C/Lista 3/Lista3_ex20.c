#include <stdio.h>
#include <stdlib.h>

//********* LISTA DE EXERCICIOS 3 ****************
//************* EXERCICIO 20 **********************

/* Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informacao da especie do animal (se e gato ou
cachorro). Ao final, exiba a quantidade de animais que sao gatos e a quantidade de animais que
sao cachorros existentes na loja*/

int main()
{
    int num=0,animal=0,gato=0,dog=0;
    printf("DIGITE A QUANTIDADE DE ANIMAIS NA LOJA\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("QUE ANIMAL?\nDIGITE\n1 - GATO\n2 - CACHORRO\n");
        scanf("%d",&animal);
            if(animal==1){gato++;}
            if(animal==2){dog++;}
            system("cls");
    }

    printf("O NUMERO DE ANIMAIS NA LOJA E: %d\nDE GATOS: %d\nE CACHORROS: %d",num,gato,dog);
    return 0;
}
