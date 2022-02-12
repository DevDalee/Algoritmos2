#include <stdio.h>

int main(){
    int lado, count=1;
    printf("Lado do quadrado: ");
    scanf("%d", &lado);

        //Imprimindo a primeira linha
    while(count<=lado){
        printf("*");
        count++;
    }
        printf("\n");

        count=1;
    while( count <= lado*(lado-2)){
        if( (count%lado == 1))
            printf("*");
        else
        if( (count%lado == 0))
            printf("*\n");
        else
            printf(" ");

            count++;
        }

        //Imprimindo a primeira linha
        count=1;
        while(count<=lado)
        {
            printf("*");
            count++;
        }
        printf("\n");
}