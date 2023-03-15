/******************************************************************************

             Crie um programa que contenha um array contendo 5
           elementos inteiros. Leia esse array do teclado e imprima o
                 endereço das posições contendo valores pares

*******************************************************************************/

#include <stdio.h>
int main()
{
    int a[5];
    int i;
    int *p = a;

    for(i=0; i<5; i++)
      scanf("%d",&a[i]);

    for(i=0; i<5; i++){
      if(a[i] % 2 == 0){
       printf(" %p ",(p+i));
      }
    }
    return 0;
}

/* NEW solution.
{
    int a[5];

    for(i=0; i<5; i++)
      scanf("%d",&a[i]);

    for(i=0; i<5; i++){
      if(a[i] % 2 == 0){
       printf(" %p ",&a[i]);
      }
    }
    return 0;
}
*/
