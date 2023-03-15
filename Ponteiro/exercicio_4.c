/***************************************************************************

               Crie um programa que contenha um array de inteiros
               contendo 5 elementos. Utilizando apenas aritmética
              de ponteiros, leia esse array do teclado e imprima o
                         dobro de cada valor lido.

*******************************************************************************/
#include <stdio.h>
int main(){

  int a[5];
  int i, re;
  int *p = a;

  for(i=0; i<5; i++){
    scanf("%d",(p+i));
  }

  for(i=0; i<5; i++){
     re = *(p+i) + *(p+i);
     printf(" %d ",re);
  }

  return 0;
}
