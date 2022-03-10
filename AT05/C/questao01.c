#include <stdio.h>
int x;

void cubo(int *nPrt){  
    *nPrt = x;
    x = *nPrt * *nPrt * *nPrt;
}

int main(){
    scanf("%d", &x);
    cubo(&x);
    printf("%i", x);
} 