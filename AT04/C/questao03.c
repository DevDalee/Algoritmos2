#include <stdio.h>
#include <string.h>
#define n_card 14
    char *numeros[n_card] = {'Às', 'Um', 'Dois', 'Três', 'Quatro', 'Cinco', 'Seis', 'Sete', 'Oito', 'Nove', 'Dez', 'Valete', 'Damas', 'Rei'};
    char *naipes[4] = {'Paus', 'Ouros', 'Copas', 'Espadas'};

int main(){   
    srand(time(0));
    int d,i;
    scanf("%d", &d);

    if (d == 1){
        for (i = 0; i < 15 ; i++){
            printf("%s de %s", numeros[i], naipes[0]);
        }
        for (i = 0; i < 15 ; i++){
            printf("%s de %s", numeros[i], naipes[1]);
        }
        for (i = 0; i < 15 ; i++){
            printf("%s de %s", numeros[i], naipes[2]);
        }
        for (i = 0; i < 15 ; i++){
            printf("%s de %s", numeros[i], naipes[3]);
        }
    }
    
    
}
