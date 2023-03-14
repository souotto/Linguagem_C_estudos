#include <stdio.h>

int main(){
//10. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os
//demais elementos. Escreva ao ﬁnal a matriz obtida.

  int i, j;
  int a[5][5]={{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};


   for (i=0; i<5; i++) {
    for (j=0; j<5; j++) {
      printf("%d ", a[i][j]);
     }
      printf("\n");
   }
   printf("\n");

  return 0;

}
