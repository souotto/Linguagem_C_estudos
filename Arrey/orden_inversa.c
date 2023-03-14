#include <stdio.h>

int main(){
//2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
//valores lidos na ordem inversa.

  int valor[6];
  int i;

  for(i=0; i<6; i++){
    scanf("%d",&valor[i]);
  }

  for(i=5; i>=0; i--){
    printf("- %d -",valor[i]);
  }
  printf("\n");
  return 0;
}
