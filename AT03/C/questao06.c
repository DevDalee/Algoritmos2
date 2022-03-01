#include <stdio.h>

int a=0, s=0,v=0,p=0,a2=0,s2=0;

char artigo[200] = {'o', 'um', 'algum', 'todo', 'qualquer'};
char substantivo[100] = {'menino', 'homem', 'cachorro', 'carro', 'gato'};
char verbo[100] = {'passou', 'pulou', 'correu', 'saltos', 'andou'};
char preposicao[100] = {'sobre', 'sob', 'ante', 'ate', 'com'};

char escrever(){
    for (int i = 0; i < 20; i++){
       a = rand() % 7;
       s = rand() % 4;
       v = rand() % 5;
       p = rand() % 3;
       a2 = rand() % 7;
       s2 = rand() % 4;
       printf("%d - %c %c %c %c %c %c\n",i+1,artigo[a],substantivo[s],verbo[v],preposicao[p],artigo[a2],substantivo[s2]);
    }
}

int main(){
    escrever();
}