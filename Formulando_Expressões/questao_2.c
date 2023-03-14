#include<stdio.h>
/*
Leia um número inteiro e imprima o seu antecessor
e o seu sucessor.
*/
int main(){

   unsigned int Numero;

   printf("Digite um numero inteiro: ");
   scanf("%i",&Numero);

   printf("Numero Inserido   --> %i\n",Numero);

   printf("Numero Antecessor --> %i\n",Numero-1);

   printf("Numero Sucessor   --> %i\n",Numero+1);

   return 0;
}
