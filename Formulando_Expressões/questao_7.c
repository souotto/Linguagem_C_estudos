#include<stdio.h>
/*
Questão 7
● Faça um programa que leia um n ́ umero inteiro
positivo de três digitos (de 100 a 999). Gere outro
número formado pelos dígitos invertidos do número
lido.
*/
int main(){

   int numero, d1, d2, d3;

   printf("Digite Um numero: ---> ");
   scanf("%d",&numero);
     d1 = numero%10;
     d2 = (int)(numero/10)%10;
     d3 = (int)(numero/100);
   printf("%d%d%d\n",d1,d2,d3);
   return 0;
}


