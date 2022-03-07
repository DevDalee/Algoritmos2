#include <stdio.h>
#define n  5

struct aluno{
    char nome[15];
    float peso, altura, mediaIra
};

void main(){
    struct aluno c[n];
    char maior1[15], maior2[15], maior3[15];
    float Mpeso, Maltura, Mira, maxPeso = 0, maxAlt = 0, maxIra = 0;
    for(int i=0; i<n; i++){
        scanf("%s %f %f %f", c[i].nome, &c[i].altura, &c[i].peso, &c[i].mediaIra);
        Maltura+=c[i].altura;
        Mpeso+=c[i].peso;
        Mira+=c[i].mediaIra;

        if (maxPeso < c[i].peso){
            maxPeso = c[i].peso;
            maior1[15] = c[i].nome;
        }if (maxAlt < c[i].altura){
            maxAlt = c[i].altura;
            maior2[15] = c[i].nome;
        }if (maxIra < c[i].mediaIra){
            maxIra = c[i].mediaIra;
            maior3[15] = c[i].nome;
        }
    }
    	
    printf("Media de Peso: %.3f\n", Mpeso/=5);
    printf("Media de Altura: %.3f\n", Maltura/=5);
    printf("Media de IRA: %.3f\n", Mira/=5);
    printf("Maior Peso: %s  %.3f\n", maior1, maxPeso);
    printf("Maior Altura: %s  %.3f\n", maior2, maxAlt);
    printf("Maior IRA: %s  %.3f\n", maior3, maxIra);
}
