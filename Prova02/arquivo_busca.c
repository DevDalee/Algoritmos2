#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int cod;
    char descricao[240];
    int idade;
    float preco;
}Registro;

void cadastrar();
void imprimir();
void buscaS();

int main(){
    int opcao=0;
    while (opcao != 5){
        if (opcao == 0){
            printf(" 1 - Cadastrar\n 2 - Visualizar \n 3 - Buscar um Registro\n 4 - Buscar Registro\n 5 - Finalizar \n Informe o modulo desejado: ");
            scanf("%d", &opcao);
        }
        
        switch (opcao){
        case 1:
            cadastrar();
            break;
        case 2:
            imprimir();
            break;
        case 3:
            buscaS();
            break;
        //case 4:
        //    buscaM();
        //    break;

        }
        printf("\nInforme o modulo desejado: ");
        scanf("%d", &opcao);
    }
}
void cadastrar(){
    FILE *fptr;
    Registro reg;
    if((fptr = fopen("dados.txt", "a")) == NULL){
        printf("Arquivo nao encontrado\n");
    }else{
            printf("Digite o codigo: ");
            scanf("%d", &reg.cod);
            setbuf(stdin, NULL);
            printf("Digite a descricao: ");
            scanf("%[^\n]s", reg.descricao);
            printf("Digite a idade: ");
            scanf("%d", &reg.idade);
            printf("Digite o preco: ");
            scanf("%f", &reg.preco);
            fseek(fptr, (reg.cod - 1) * sizeof (reg), SEEK_SET );
            fwrite(&reg, sizeof(reg), 1 ,fptr);      

        printf("Operacao de escrita finalizada\n");
        fclose(fptr);
    }
}

void imprimir(){
    FILE *fptr;
    if((fptr = fopen("dados.txt", "r")) == NULL){
        printf("Arquivo nao encontrado\n");
    }else{
        while (!feof(fptr)){
            Registro reg = {0, "", 0.0};
            fread(&reg, sizeof(Registro), 1, fptr);
            if (reg.cod != 0){
                printf("Codigo, descricao, idade e preco\n");
                printf("%d,%s,%d,%.2f\n", reg.cod, reg.descricao, reg.idade, reg.preco);
            }
        }
        printf("Operacao de leitura finalizada\n");
        fclose(fptr);
    }
}

void buscaS(){
    FILE *fptr;
    Registro reg;
    int i;

    if((fptr = fopen("dados.txt", "a+")) == NULL){
        printf("Arquivo nao encontrado\n");
    }else{
        printf("Digite o codigo: ");
        scanf("%d", &reg.cod);
        fseek(fptr,((reg.cod - 1) * sizeof(reg)), SEEK_SET);
        fread(&reg, sizeof(reg), reg.cod, fptr);
        
        if (reg.cod == 0){
            printf("Sem Cadastro\n");
        }else{
            printf("Codigo do brinquedo, descricao, idade e preco \n");
            printf(" %d, %s, %d, %.2f\n", reg.cod, reg.descricao, reg.idade, reg.preco);
        }
        printf("Operacao de busca finalizada\n");
        fclose(fptr);
    }
}