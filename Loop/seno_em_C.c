#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,t,s,tant;
    int n;
    scanf("%f",&x);
    tant=x; /*termo anterior*/
    t=x;
    n=1;
    s=t;
    while(fabs(t)>=0.001)
    {
        n+=2;
        t=-(x*x/(n*(n-1)))*tant;
        s+=t;
        tant=t;
    }
    printf("seno: %f\n",s);
    return 0;
}
