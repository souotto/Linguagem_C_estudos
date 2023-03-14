#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ant1,ant2,termo,i;
    scanf("%d",&n);
    ant1=1;
    ant2=1;
    for(i=3;i<=n;i++)
    {
        termo=ant1+ant2;
        ant2=ant1;
        ant1=termo;
    }
    printf("termo: %d\n",termo);
    return 0;
}
