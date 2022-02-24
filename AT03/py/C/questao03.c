#include <stdio.h>
#include <stdlib.h>

void main(){
    int moeda, cont, i;
    cont = 0;

    for(i = 0; i < 100; i++){
        moeda = arremesso();
        if(moeda == 1){
            printf("Cara\n");
            cont++;
        }else{
            printf("Coroa\n");
        }
    }
    printf("%d Ocorrencias de Cara", cont);
}
int arremesso(){
    return rand()%2;
}
