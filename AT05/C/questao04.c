#include <stdio.h>

int somaDoisNumeros( int num1, int num2) {
   return num1 + num2; //<-- Retorna a soma
}

int main(){
   int N, num1, num2;

   scanf("%d", &num1);
   scanf("%d", &num2);
   N = somaDoisNumeros(num1, num2);

}