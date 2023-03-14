/*
  Cálcula media entre 6 e 9
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n1, n2, n3, m;
    printf("insira sua nota\n");
    scanf("%f%f%f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
    printf("media: %f\n",m);
    if(m>=6&&m<=9)
        printf("esta no intervalo\n");
    else
        printf("nao esta no intervalo\n");
    return 0;
}
