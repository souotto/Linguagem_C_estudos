#include <stdio.h>
int main(){
//5. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que
//possuírem valores negativos

   int positivo[10], i;

   for(i=0; i<10; i++){
     scanf("%d",&positivo[i]);
   }

   for(i=0; i<10; i++){
    if(positivo[i] < 0)
     positivo[i] = 0;
   }

   for(i=0; i<10; i++)
     printf("[ %d ]",positivo[i]);

   printf("\n");
   return 0;
}
