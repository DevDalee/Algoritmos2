#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define T 200

char frase[T];
int  i=0;

void maiusculo(char *sPrt[T]);


int main(){
    fgets(frase, 200, stdin); 
    maiusculo( frase );
    printf("%s", frase);
}

void maiusculo(char *sPrt[T]){

    while(*sPrt != '\0'){
        if ( islower(*sPrt)){
            *sPrt = toupper(*sPrt);
        }
        ++sPrt;
    }
}