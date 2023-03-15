/******************************************************************************
             Faça uma função que receba duas strings e retorne a
             intercalação letra a letra da primeira com a segunda
              string. A string intercalada deve ser retornada na
                             primeira string.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
void f(char *N, char *N1, int tamanho1){
    int i;
    for(i=0; i<tamanho1; i++){
       printf("%c%c",N[i],N1[i]);
    }
}
int main()
{
    char n[61];
    char n1[61];
    int tamanho = 0;

    fgets(n, 61, stdin);
    fgets(n1, 61, stdin);

    tamanho = strlen(n)+strlen(n1);
    tamanho-=2;

    f(n, n1, tamanho);

    return 0;
}






void f(char *N, char *N1, int tamanho1){
    int i;
    for(i=0; i<tamanho1; i++){
       printf("%c%c",N[i],N1[i]);
    }
}
int main()
{
    char n[61];
    char n1[61];
    int tamanho = 0;

    setbuf(stdin, NULL);
    gets(n);
    setbuf(stdin, NULL);
    gets(n1);

    strcat(n, n1);
    tamanho = strlen(n);

    f(n, n1, tamanho);

    return 0;
}
