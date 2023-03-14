#include <stdio.h>

int main(){
//6. Faça um programa que leia um vetor de 10 números. Leia um número x. Conte
//os múltiplos de um número inteiro x no vetor e mostre-os na tela
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, x;

   printf("digite um numero inteiro --> ");
   scanf("%d",&x);
   printf("\n");
   for(i=0; i<10; i++){
     int mult = x * a[i];

     printf(" -%d- ",mult);
   }
   printf("\n");
   return 0;
}
