#include <stdio.h>
long int quadrado(int x){
    long int valor;
    valor = x*x;
    return (valor);
}

int main(){
    int num;
    long int val;
    scanf("%d",&num);
    val = quadrado(num);
    printf("O quadrado de %d e %ld\n",num,val);
    return (0);
}
