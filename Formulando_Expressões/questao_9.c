#include<stdio.h>
/*
Leia um número inteiro e imprima a soma do sucessor de seu
triplo com o antecessor de seu dobro.
*/
int main(){

   int numero, sucessorTriplo, antecessorDobro, soma;

   printf("Digite um numero inteiro: ");
   scanf("%i",&numero);

   sucessorTriplo = 3 * (numero+1);
   antecessorDobro = 2 * (numero-1);
   soma= sucessorTriplo+antecessorDobro;

   printf("soma do sucessor triplo com o antecessor dobro = %i\n",soma);
}
