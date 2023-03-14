#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float val;
    for(x=-4;x<=4;x++)
        for(y=-5;y<=5;y++)
        {
            val=x*x/16.0+y*y/25.0;
            if(val<=1)
                printf("par: %d , %d\n",x,y);
        }
    return 0;
}
