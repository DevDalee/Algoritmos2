#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 30 
#define E 50 
#define T 14 

int num_comp , num_mov;
typedef struct{
    int chave;
    char nome[N];
    char endereco[E];
    char telefone[T];
}Alunos;

void gerarDados(Alunos v[], int n, int ordemChave){
    switch (ordemChave){
    case 0:
        crescente(v, n);
        break;
    case 1:
        aleatorio(v, n);
        break;
    case 2:
        decrescente(v, n);
        break;
    default:
        printf("Numero invalido!\n");
        break;
    }
}
void crescente(Alunos v[], int c){
    int i = 0;
    for (i = 0; i < c; i++){
        v[i].chave = i;
    }
}
void aleatorio(Alunos v[], int c){
    int i = 0;
    for (i = 0; i < c; i++){
        v[i].chave = rand() % 10001;
    }
}

void decrescente(Alunos v[], int c){
    int i = 0, j = 0;
    for (j = c - 1; j >= 0; j--, i++){
        v[i].chave = j;
    }
}
void imprimir(Alunos v[], int c){
    int i = 0;

    for (i = 0; i < c; i++){
        printf("%d ", v[i].chave);
    }
}
void ABolha(Alunos v[], int c){  
    int i = 0, j = 0, aux = 0;
    for (i = 0; i < c - 1; i++){
        for (j = 1; j < c - 1; j++){
            num_comp++;
            if (v[j].chave < v[j - 1].chave){
                num_mov+=1;
                // troca(v[j-1], v[j]);
                aux = v[j].chave;
                num_mov+=1;
                v[j].chave = v[j - 1].chave;
                num_mov+=1;
                v[j - 1].chave = aux;
            }
        }
    }
    num_comp/=2;
}
void ASelecao(Alunos v[], int c){
   
    int i, j, menor = 0, aux = 0;
    for (i = 0; i < c - 1; i++){
        menor = i;
        for (j = i + 1; j < c; j++){
            num_comp+=1;
            if (v[j].chave < v[menor].chave){
               menor = j;
            }
            num_mov+=1;
            // troca(v[i], v[menor]);
            aux = v[i].chave;
            num_mov += 1;
            v[i].chave = v[menor].chave;
            num_mov += 1;
            v[menor].chave = aux;
        }
    }
}
void AInsercao(Alunos v[], int c){
    
    int i, j, aux = 0;
    for (i = 1; i < c; i++){
        aux = v[i].chave;
        num_mov++;
        j = i - 1; 
        num_comp+=1;
        for (j >= 0 && (v[j].chave > aux); j--;){
            num_mov+=1;
            v[j + 1].chave = v[j].chave;
            num_mov+=1;
        }
        v[j + 1].chave = aux;
        num_mov+=1;
    }  
}
void main(){
    int tamVet = 0, ordChave = 0, tipo = 0;

    srand((unsigned)time(NULL));

    scanf("%d", &tamVet);

    Alunos v[tamVet], aux[1000];

    while(1){
        scanf ("%d", &ordChave);
        if(ordChave == 3){
            break;
        }
        scanf ("%d", &tipo);

        gerarDados(v, tamVet, ordChave);

        switch (tipo){
        case 0:
            printf("ABolha\n");
            // imprimir(v, tamVet);
            num_comp = 0;
            num_mov = 0;
            ABolha(v, tamVet);
            printf("\n");
            printf("Comparacoes: %d\n", num_comp);
            printf("Movimentos: %d\n", num_mov);
            printf("\n");
            break;
        
        case 1:
            printf("ASelecao\n");
            // imprimir(v, tamVet);
            num_comp = 0;
            num_mov = 0;
            ASelecao(v, tamVet);
            printf("\n");
            printf("Comparacoes: %d\n", num_comp);
            printf("Movimentos: %d\n", num_mov);
            printf("\n");
            break;
        
        case 2:
            printf("AInsercao\n");
            // imprimir(v, tamVet);
            num_comp = 0;
            num_mov = 0;
            AInsercao(v, tamVet);
            printf("\n");
            printf("Comparacoes: %d\n", num_comp);
            printf("Movimentos: %d\n", num_mov);
            printf("\n");
            break;

        default:
            break;
        }
        printf("{");
        imprimir(v, tamVet);
        printf("}");
    }
}