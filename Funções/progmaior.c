#include <stdio.h>
float maior(float x,float y);
int main()
{
    float x,y,val;
    scanf("%f%f",&x,&y);
    val = maior(x,y);
    printf("O maior dentre %f e %f eh %f\n",x,y,val);
    return (0);
}
float maior(float a, float b)
{
    if ( a >= b )
        return(a);
    else
        return(b);
}
