#include <stdio.h>

int main(){
//Para um array A com 5 números inteiros, formular um algoritmo que
//determine o maior elemento deste array

  int a[5] = {2, 45, 76, 8, 9};  int maior, i;

  maior = a[0];

  for(i=0; i<5; i++){

   if(a[i] > maior)
    maior = a[i];
  }

   printf("-- maior -- %d --\n",maior);

  return 0;
}
