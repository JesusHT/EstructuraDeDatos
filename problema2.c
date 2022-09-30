#include <stdio.h>

int sucecion(int fin){
    int res;
    
    if(fin == 0){
        return 1;
    }else if (fin > 0) {
        res = 3 * sucecion(fin - 1);
    }

    return res;
}


int main(){
    int cantidad;

    printf("\nIngresa la cantidad de numeros de la sucecion: ");
    scanf("%d",&cantidad);

    for(int i=0;i<cantidad;i++){
        printf("%d ",5 * sucecion(i));
    }

    printf("\n");

    return 1;
}