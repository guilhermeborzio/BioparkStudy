#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("DIGITE TRES VALORES\n");
    scanf ("%d%d%d",&x,&y,&z);

        //VERIFICA SE NÃO É UM TRIANGULO
    if((x >= y+z) || (y >= x+z) || (z >= y+x)){
            printf("\nPELAS MEDIDAS INFORMADAS, A FORMA GEOMETRICA NAO SE IDENTIFICA COMO UM TRIANGULO");
            return 0;
    }
    if (x==y&&x==z){
        printf("E UM TRIANGULO EQUILATERO\n");
    }
    else if (x==y || y==z||z==x){
        printf("EH UM TRIANGULO ISOCELES\n");
    }
    else if (x!=y&&x!=z&&y!=z){
        printf("EH UM TRIANGULO ESCALENO\n");
    }
    return 0;
}
