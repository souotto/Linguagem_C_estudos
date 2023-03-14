#include <stdio.h>
#include <stdlib.h>
void permuta(int *a,int *b);
int main()
{
    int x,y;
    printf("entre com x: ");
    scanf("%d",&x);
    printf("entre com y: ");
    scanf("%d",&y);
    printf("x= %d , y= %d\n",x,y);
    permuta(&x,&y);
    printf("apos chamada de permuta()\n");
    printf("x= %d , y= %d\n",x,y);
    return 0;
}
void permuta(int *a,int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
