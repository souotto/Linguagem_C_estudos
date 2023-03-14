#include <stdio.h>
#include <stdlib.h>
float media(float v[],int dim)
{
    float soma;
    int i;
    soma = 0;
    for(i=0;i<dim;i++)
        soma += v[i];
    return soma/dim;
}

int main()
{
    float x[5],valmed;
    int i;
    for(i=0;i<5;i++)
    {
        printf("x[%d]: ",i);
        scanf("%f",&x[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
        printf("x[%d]: %f\n",i,x[i]);
    valmed = media(x,5);
    printf("\n\n");
    printf("media: %f\n",valmed);
    printf("meida: %f\n",media(x,5));
    return 0;
}
