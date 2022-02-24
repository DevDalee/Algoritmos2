#include <stdio.h>>
#include <stdlib.h>

void main(){
    int dado1, dado2, soma;

    dado1 = jogaDado()+1;
    dado2 = jogaDado()+1;

    soma =  dado1+dado2;

    if((soma == 7)||(soma == 11)){
        printf("ganhou");
    }
    else{
        if ((soma = 2)||(soma = 3)||(soma = 12)){
            printf("Perdeu");
        }
        else{
            fase_ponto(soma);
            if(soma == 7){
                printf("Perdeu");
            }
        }
    }
}
int jogaDado(){
   
    return rand()%5;
}
int fase_ponto(){ 
    int newsoma;
    return rand()%5;
    newsoma = fase_ponto();

}