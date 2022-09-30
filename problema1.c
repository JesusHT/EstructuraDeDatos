#include <stdio.h>

int potencia(int base, int exp){
    int res;
    
     if(exp == 0){
        return 1;
    }else if (exp > 0) {
        res=base * potencia(base,exp - 1);
    }

    return res;
}


int main(){
    int exp, base, res;

    printf("Ingresa la base de la potencia: ");
    scanf("%d",&base);
    printf("Ingresa la potencia: ");
    scanf("%d",&exp);

    if(exp < 0){
        printf("\nEl exponente debe ser mayo a 0!\n");
        return 1;
    }

    printf("\nLa potencia de %d^%d = %d",base,exp,potencia(base,exp));
    printf("\n");
}
