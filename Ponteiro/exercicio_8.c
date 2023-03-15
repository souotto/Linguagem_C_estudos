/******************************************************************************

             Escreva uma função que aceita como parâmetro um
                   array de inteiros com N valores, e
             determina o maior elemento do array e o número de
               vezes que este elemento ocorreu no array. Por
             exemplo, para um array com os seguintes elementos:
          5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retornar para
             o programa que a chamou o valor 15 e o número 3
             (indicando que o número 15 ocorreu 3 vezes). A
                     função deve ser do tipo void.

*******************************************************************************/

#include <stdio.h>

void f(int *aa, int n){

    int max=aa[1];
    int i;
    int contador=0;

    for(i=0; i<9; i++){
       if(max < aa[i]){
           max = aa[i];
       }
    }

    for(i=0; i<9; i++){
      if(max == aa[i]){
          contador++;
      }
    }
    printf(" %d  e  %d\n",max, contador);
}
int main(){

   int a[9] = {5, 2, 15, 3, 7, 15, 8, 6, 15};

   f(a, 9);

   return 0;
}
