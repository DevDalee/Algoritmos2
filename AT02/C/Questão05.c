#include <stdio.h>
#define L 5
#define C 20

int main(){

    char nome[L][C];
    float medidas[5][3];
    int i, j;

    for(i = 0; i < L; i++){
        printf("%d- Estudande:\n", i+1);
        scanf("%f", &nome[i]);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &medidas[i][j]);
        }

    }
}
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%f\n", medidas[i][j]);
        }
    }
}