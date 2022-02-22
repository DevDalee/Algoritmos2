#include <stdio.h>
#define L 5
#define C 20

int main(){

    char nome[L][C];
    float medidas[5][3];
    int k,i, j;
    float media_alt = 0, media_peso = 0, media_ira = 0;
    float maior_alt = 0, maior_peso =0, maior_ira=0;
    float menor_alt=0, menor_peso=0, maior_ira=0;

    printf("Nomes: ");
    for(k = 0; k < L; k++){  
        scanf("%s", &nome[k]);
    }
    printf("Altura/Peso/IRA: ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            scanf("%f", &medidas[i][j]);
        }
    }
    printf("Media das alturas:");
    for (i = 0; i < 1; i++){
        for(j = 0; j <= 4; j++){
            media_alt += medidas[i][j];
            media_alt = media_alt / 5; 
            if(medidas[i][j] > maior_alt){
                maior_alt = medidas[i][j];
            }
        }
    }
    printf("%.2f\n", media_alt);
    printf("Maior altura: %f", maior_alt);
    
    printf("Media dos pesos:");
    for (i = 1; i < 2; i++){
        for(j = 0; j <= 4; j++){
            media_alt += medidas[i][j];
            media_alt = media_alt / 5; 
            if(medidas[i][j] > maior_peso){
                maior_peso = medidas[i][j];
            }
        }
    }
    printf("%.2f\n", media_peso);
    printf("Maior peso: %f", maior_peso);

    printf("Media dos IRAs:");
    for (i = 2; i < 3; i++){
        for(j = 0; j <= 4; j++){
            media_alt += medidas[i][j];
            media_alt = media_alt / 5; 
            if(medidas[i][j] > maior_ira){
                maior_ira = medidas[i][j];
            }
        }
    }
    printf("%.2f", media_ira);
    printf("Maior IRA: %f", maior_ira);
}