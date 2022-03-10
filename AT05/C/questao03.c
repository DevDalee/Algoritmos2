#include <stdio.h>
#include <ctype.h>

char frase[200];
int count=0, i=0;

void maiusculo(char *sPrt[200]){
    while(frase[i] < count){
        *sPrt[i] = toupper(frase[i]);
        frase[i] = *sPrt[i];
    }
}

int main(){
    for(int i = 0; (frase[i]=getchar())!='\n'; i++){} 
    count=i;
    maiusculo(&frase);
    printf("%s", frase);
}