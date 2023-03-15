/******************************************************************************

            Faça um programa que leia dois valores inteiros e chame
                uma função que receba estes 2 valores de entrada e
            retorne o maior valor na primeira variável e o menor valor
             na segunda variável. Escreva o conteúdo das 2 variáveis
                                     na tela
*******************************************************************************/

#include <stdio.h>
void funcao(int *A1, int *A2){
    int aux;

    if(*A1 < *A2){
       aux = *A1;
       *A1 = *A2;
       *A2 = aux;
    }
}
int main()
{
    int a1, a2;
    scanf("%d%d",&a1,&a2);

    funcao(&a1, &a2);

    printf("\n %d  %d \n",a1 ,a2);

    return 0;
}
