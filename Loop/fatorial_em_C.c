#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,fat;
    scanf("%d",&N);
    fat=1;
    for(i=1;i<=N;i++)
        fat*=i;
    printf("fat:%d\n",fat);
    return 0;
}
