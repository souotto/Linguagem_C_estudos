#include<stdio.h>
/*
Faça a leitura de três valores e apresente como
resultado a soma dos quadrados dos três valores
lidos.
*/
int main(){

   int val1, val2, val3, Soma;

   printf("Digite três inteiros: ");
   scanf("%d%d%d",&val1,&val2,&val3);

    Soma = (val1*val1) + (val2*val2) + (val3*val3);

  printf("soma dos quadrados = %d\n\7",Soma);

  return 0;
}
