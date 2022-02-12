#include <stdio.h>

int main(){
    int lado, count=1;

    printf("Lado do quadrado: ");
    scanf("%d", &lado);

    while( count <= lado*lado){
        if(count % lado == 0){
            printf("*\n");
        }else{
            printf("*");
        }
        count++;
    }
}