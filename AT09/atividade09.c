#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef struct {
   int codigo;
   char nomeV[20];
}reg;

typedef struct{
    reg itens[MAX+1];
    int tamanho;
}t;

void insere ( reg, t){
    if (t.tamanho == MAX){
        printf("Erro:Tabela Cheia\n");
    } else {
        t.tamanho++;
        reg.codigo[t.tamanho] = srand() % 1000;
        reg.nomeV[t.tamanho] = 'Gol';
    }
}

/*int pesquisa (int codigo, t){
    int i,c;
    t.itens[0].codigo = codigo;
    for ( i = t.tamanho; t.itens[i].codigo != codigo; i--){
        return i;
        c++;
    }   
}*/ 
void main(){
    int i=0;
    srand(time(0));
    while (i != MAX){
        insere();
        i++;
    }

    /*for (int j = 1; j < 101; j++){
        reg.codigo[j];
        pesquisa(reg.codigo[j], tabela);
    }
    printf("Registros percorridos pela pesquisa eh: %d", c);
    */
       
}