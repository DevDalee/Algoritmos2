#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define T 200

char frase[T];
char res[T];
int  i=0;

void maiusculo(char *sPrt[T]){

    while(frase[i] != '\0'){
        *sPrt[i]
        res[i] = toupper();
        printf("%d", i);
        i++;
    }
}

int main(){
    fgets(frase, 200, stdin); 
    maiusculo(&frase);
    printf("%s", res);
}