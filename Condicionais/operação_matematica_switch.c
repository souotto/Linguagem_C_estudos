#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,val;
    char op;
    printf("1o valor:");
    scanf("%d",&a);
    printf("2o valor:");
    scanf("%d",&b);
    getchar();
    printf("operacao: ");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
            val=a+b;
            printf("a+b: %d\n",val);
            break;
        case '-':
            val=a-b;
            printf("a-b: %d\n",val);
            break;
        case '*':
            val=a*b;
            printf("a*b: %d\n",val);
            break;
        case '/':
            val=a/b;
            printf("a/b: %d\n",val);
            break;
        default:
            printf("opedor invalido\n");
    }
    return 0;
}
