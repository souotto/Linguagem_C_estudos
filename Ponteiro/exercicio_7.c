/******************************************************************************

             Escreva uma função que receba um array de inteiros
              V e os endereços de duas variáveis inteiras, min e
              max, e armazene nessas variáveis o valor mínimo e
                             máximo do array.

*******************************************************************************/
/*
PROFESSOR  coloquei dois prog porque tava meio com duvida
*/

#include <stdio.h>

void f(int *a, int *b){
    printf("o valor max %d\n Endereço - %p\n",*a,a);
    printf("o valor min %d\n Endereço - %p\n",*b,a);
}
int main()
{
    int a[5] = {22, 31, 5, 23, 56};

    int min=0;  int max=0;
    int i;
    min = max = a[1];

    for(i=0; i<5; i++){
        if(min > a[i])
          min = a[i];
    }
        for(i=0; i<5; i++){
        if(max < a[i])
          max = a[i];
        }

    f(&max, &min);

    return 0;
}

/*
void f(int *aa, int n){

    int min=0;  int max=0;
    int i;
    min = max = 10;

    for(i=0; i<5; i++){
        if(min > aa[i])
          min = aa[i];
    }
        for(i=0; i<5; i++){
        if(max < aa[i])
          max = aa[i];
        }
    printf("o valor min %d\n",min);
    printf("o valor max %d\n",max);
}
int main()
{
    int a[5] = {22, 31, 5, 23, 56};

    f(a, 5);

    return 0;
}
*/
