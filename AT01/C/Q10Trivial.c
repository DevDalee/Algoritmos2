#include <stdio.h>

int main(){
    int x = 0, y = 0, mdc = 1, maior = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y){
        maior = x;
    }else{
        maior = y;
    }
    for (int i = 0; i <= maior; i++){
        if (x%i==0 && y%i==0){
            mdc = i;
        }    
    }
    printf("%d", mdc);
      
}