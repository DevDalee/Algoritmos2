#include <stdio.h>
#define L 5
#define C 20

int main(){

    char nome[L][C];
    float medidas[5][3];
    int k,i,j;
    float media_alt = 0, media_peso = 0, media_ira = 0, maior_alt = 0, maior_peso = 0, maior_ira = 0, menor_alt = 0, menor_peso = 0, menor_ira = 0;

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
    for (i = 0; i <= 4; i++){
        for(j = 0; j < 1; j++){
            media_alt += medidas[i][j]; 
            if(medidas[i][j] > maior_alt){
                maior_alt = medidas[i][j];
            }
            menor_alt = medidas[i][j];
        }
    }
    media_alt /= 5;
    for ( i = 0; i <= 4; i++){
        for (j = 0; j < 1; j++){
            if(medidas[i][j] < menor_alt){
                menor_alt = medidas[i][j];
            }
        }
        
    }
    
    printf(" %.2f\n", media_alt);
    printf("Maior altura: %.2f\n", maior_alt);
    printf("Menor altura: %.2f\n", menor_alt);
    
    printf("Media dos pesos:");
    for (i = 0; i <= 4; i++){
        for(j = 1; j < 2; j++){
            media_peso += medidas[i][j];            
            if(medidas[i][j] > maior_peso){
                maior_peso = medidas[i][j];
            }
            menor_peso = medidas[i][j];
        }
    }
    media_peso /= 5;
    for ( i = 0; i <= 4; i++){
        for (j = 1; j < 2; j++){
            if(medidas[i][j] < menor_peso){
                menor_peso = medidas[i][j];
            }
        }
        
    }
    printf(" %.2f\n", media_peso);
    printf("Maior peso: %.2f\n", maior_peso);
    printf("Menor peso: %.2f\n", menor_peso);

    printf("Media dos IRAs:");
    for (i = 0; i <= 4; i++){
        for(j = 2; j < 3; j++){
            media_ira += medidas[i][j];            
            if(medidas[i][j] > maior_ira){
                maior_ira = medidas[i][j];
            }
            menor_ira = medidas[i][j];
        }
    }
    media_ira /= 5;
    for ( i = 0; i <= 4; i++){
        for (j = 2; j < 3; j++){
            if(medidas[i][j] < menor_ira){
                menor_ira = medidas[i][j];
            }
        }
        
    }
    printf(" %.2f\n", media_ira);
    printf("Maior IRA: %.2f\n", maior_ira);
    printf("Menor IRA: %.2f\n", menor_ira);
}