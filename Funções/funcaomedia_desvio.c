#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float media(const float v[],int dim);
float desvio(const float v[],int dim);
int main()
{
    float x[5],valmed,valdesv;
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
    valdesv = desvio(x,5);
    printf("\n\n");
    printf("media: %f\n",valmed);
    printf("desvio: %f\n",valdesv);
    return 0;
}

float media(const float v[],int dim)
{
    float soma;
    int i;
    soma = 0;
    for(i=0;i<dim;i++)
        soma += v[i];
    return soma/dim;
}

float desvio(const float v[],int dim)
{
    float m,soma;
    int i;
    m = media(v,dim);
    soma = 0;
    for(i=0;i<dim;i++)
        soma += (v[i]-m)*(v[i]-m);
    return sqrt(soma/dim);
}
