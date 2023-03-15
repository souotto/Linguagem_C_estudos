/******************************************************************************

             Considere a seguinte declaração: int A, *B, **C, ***D
             Escreva um programa que leia a variável a e calcule e
               exiba o dobro, o triplo e o quádruplo desse valor
             utilizando apenas os ponteiros B, C e D. O ponteiro B
             deve ser usado para calcular o dobro, C o triplo e D o
                                    quádruplo.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, *b, **c, ***d;
    int dobro=0, triplo=0, qua=0;

    scanf("%d",&a);

    b = &a;
    dobro = 2 * (*b);

    c = &b;
    triplo = 3 * (**c);

    d = &c;
    qua = 4 * (***d);

    printf(" dobro %d\n",dobro);

    printf(" triplo %d\n",triplo);

    printf(" qua %d\n",qua);

    return 0;
}
