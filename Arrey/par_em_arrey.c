#include <stdio.h>

int main(){
//1. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele
//possui.

  int vetor[10];                      //= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i, par=0;

  for(i=0; i<10; i++){
    scanf("%d",&vetor[i]);
  }

  for(i=0; i<10; i++){

   if(vetor[i] % 2 == 0){
    printf("o %d e par.\n",vetor[i]);
    par++;
    }

 }
  printf("Total de valores pares -- %d --\n",par);

  return 0;
}
